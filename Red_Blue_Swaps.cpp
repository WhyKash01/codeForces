#include <bits/stdc++.h>
using namespace std;

// Original structs (Names unchanged)
struct Component {
    string componentId, componentName, componentType, criticalFlag;
    long long capacityKw;
    int inputIndex;
};

struct Connection {
    string connectionId, parentComponentId, childComponentId;
};

struct LoadDemand {
    string loadId, componentId, consumerType;
    int demandDay;
    long long demandKw;
};

struct SensorReading {
    string readingId, componentId;
    int readingDay, voltage, temperature;
};

struct FaultEvent {
    string faultId, componentId, severity;
    int faultDay;
};

struct MaintenanceLog {
    string maintenanceId, componentId, maintenanceType;
    int maintenanceDay;
};

// Internal graph node with shortened tracking variables
struct Node {
    Component c;
    
    long long dLoad = 0;
    long long dsLoad = 0;
    
    bool hFault = false;
    int mFaults = 0;
    bool upFault = false;
    
    bool vSens = false;
    int lSensDay = -1;
    int lVolt = 0;
    int lTemp = 0;
    
    bool vMaint = false;
    int lMaintDay = -1;
    string lMaintType = "NONE";
    
    string pId = "";
    vector<string> ch;
    
    int score = 0;
    string lvl = "NORMAL";
};

// Shortened cycle checker
bool hasCyc(const string& u, const string& v, unordered_map<string, Node>& g) {
    string cur = u;
    while (cur != "") {
        if (cur == v) return true;
        cur = g[cur].pId;
    }
    return false;
}

string solve(int refDay, vector<Component>& comps, vector<Connection>& conns, 
             vector<LoadDemand>& loads, vector<SensorReading>& sens, 
             vector<FaultEvent>& faults, vector<MaintenanceLog>& maints) {
             
    unordered_map<string, Node> g;
    
    for (const auto& c : comps) {
        Node n;
        n.c = c;
        g[c.componentId] = n;
    }
    
    for (const auto& cn : conns) {
        if (!g.count(cn.parentComponentId) || !g.count(cn.childComponentId)) continue;
        if (cn.parentComponentId == cn.childComponentId) continue;
        if (g[cn.childComponentId].pId != "") continue;
        if (hasCyc(cn.parentComponentId, cn.childComponentId, g)) continue;
        
        g[cn.childComponentId].pId = cn.parentComponentId;
        g[cn.parentComponentId].ch.push_back(cn.childComponentId);
    }
    
    unordered_set<string> vCon = {"RESIDENTIAL", "COMMERCIAL", "INDUSTRIAL", "HOSPITAL"};
    for (const auto& ld : loads) {
        if (g.count(ld.componentId) && ld.demandDay >= 1 && ld.demandDay <= refDay && 
            ld.demandKw >= 0 && vCon.count(ld.consumerType)) {
            g[ld.componentId].dLoad += ld.demandKw;
        }
    }
    
    for (const auto& sr : sens) {
        if (g.count(sr.componentId) && sr.readingDay >= 1 && sr.readingDay <= refDay && 
            sr.voltage >= 0 && sr.temperature >= 0) {
            
            if (!g[sr.componentId].vSens || sr.readingDay >= g[sr.componentId].lSensDay) {
                g[sr.componentId].vSens = true;
                g[sr.componentId].lSensDay = sr.readingDay;
                g[sr.componentId].lVolt = sr.voltage;
                g[sr.componentId].lTemp = sr.temperature;
            }
        }
    }
    
    unordered_set<string> vSev = {"LOW", "MEDIUM", "HIGH"};
    for (const auto& fe : faults) {
        if (g.count(fe.componentId) && fe.faultDay >= 1 && fe.faultDay <= refDay && vSev.count(fe.severity)) {
            if (fe.severity == "HIGH") g[fe.componentId].hFault = true;
            else if (fe.severity == "MEDIUM") g[fe.componentId].mFaults++;
        }
    }
    
    unordered_set<string> vMnt = {"INSPECTION", "REPAIR", "SHUTDOWN"};
    for (const auto& ml : maints) {
        if (g.count(ml.componentId) && ml.maintenanceDay >= 1 && ml.maintenanceDay <= refDay && vMnt.count(ml.maintenanceType)) {
            if (!g[ml.componentId].vMaint || ml.maintenanceDay >= g[ml.componentId].lMaintDay) {
                g[ml.componentId].vMaint = true;
                g[ml.componentId].lMaintDay = ml.maintenanceDay;
                g[ml.componentId].lMaintType = ml.maintenanceType;
            }
        }
    }
    
    vector<string> rts;
    for (const auto& kv : g) {
        if (kv.second.pId == "") rts.push_back(kv.first);
    }
    
    function<void(const string&)> dfsD = [&](const string& u) {
        g[u].dsLoad = g[u].dLoad;
        for (const string& v : g[u].ch) {
            dfsD(v);
            g[u].dsLoad += g[v].dsLoad;
        }
    };
    for (const string& r : rts) dfsD(r);
    
    function<void(const string&, bool)> dfsU = [&](const string& u, bool pHi) {
        g[u].upFault = pHi;
        bool pass = pHi || g[u].hFault;
        for (const string& v : g[u].ch) dfsU(v, pass);
    };
    for (const string& r : rts) dfsU(r, false);
    
    vector<Node> res;
    for (auto& kv : g) {
        Node& n = kv.second;
        int s = 0;
        
        if (n.dsLoad > n.c.capacityKw) {
            s += 5;
            if (n.dsLoad >= (n.c.capacityKw * 2)) s += 4;
        }
        if (n.hFault) s += 5;
        if (n.mFaults >= 2) s += 3;
        if (n.upFault) s += 4;
        
        if (n.vSens) {
            if (n.lVolt < 210 || n.lVolt > 250) s += 3;
            if (n.lTemp >= 80) s += 3;
        } else s += 2;
        
        if (n.vMaint) {
            if (n.lMaintType == "SHUTDOWN") s += 3;
        } else s += 2;
        
        if (n.c.criticalFlag == "YES") s += 2;
        
        n.score = s;
        if (s >= 14) n.lvl = "CRITICAL";
        else if (s >= 8) n.lvl = "WARNING";
        
        if (n.lvl != "NORMAL") res.push_back(n);
    }
    
    sort(res.begin(), res.end(), [](const Node& a, const Node& b) {
        if (a.lvl != b.lvl) return a.lvl == "CRITICAL"; 
        if (a.score != b.score) return a.score > b.score;
        if (a.dsLoad != b.dsLoad) return a.dsLoad > b.dsLoad;
        return a.c.inputIndex < b.c.inputIndex;
    });
    
    if (res.empty()) return "NA";
    
    string out = "";
    for (size_t i = 0; i < res.size(); ++i) {
        if (i > 0) out += "#";
        out += res[i].c.componentName + "-" + res[i].lvl + "-" + 
               to_string(res[i].score) + "-" + to_string(res[i].dsLoad);
    }
    
    return out;
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    
    int d, nC, nCn, nL, nS, nF, nM;
    if (!(cin >> d >> nC >> nCn >> nL >> nS >> nF >> nM)) return 0;

    vector<Component> cs(nC);
    for (int i = 0; i < nC; i++) {
        cin >> cs[i].componentId >> cs[i].componentName >> cs[i].componentType 
            >> cs[i].capacityKw >> cs[i].criticalFlag;
        cs[i].inputIndex = i;
    }

    vector<Connection> cns(nCn);
    for (int i = 0; i < nCn; i++) {
        cin >> cns[i].connectionId >> cns[i].parentComponentId >> cns[i].childComponentId;
    }

    vector<LoadDemand> lds(nL);
    for (int i = 0; i < nL; i++) {
        cin >> lds[i].loadId >> lds[i].componentId >> lds[i].demandDay 
            >> lds[i].demandKw >> lds[i].consumerType;
    }

    vector<SensorReading> srs(nS);
    for (int i = 0; i < nS; i++) {
        cin >> srs[i].readingId >> srs[i].componentId >> srs[i].readingDay 
            >> srs[i].voltage >> srs[i].temperature;
    }

    vector<FaultEvent> fes(nF);
    for (int i = 0; i < nF; i++) {
        cin >> fes[i].faultId >> fes[i].componentId >> fes[i].faultDay >> fes[i].severity;
    }

    vector<MaintenanceLog> mls(nM);
    for (int i = 0; i < nM; i++) {
        cin >> mls[i].maintenanceId >> mls[i].componentId >> mls[i].maintenanceDay 
            >> mls[i].maintenanceType;
    }

    cout << solve(d, cs, cns, lds, srs, fes, mls) << "\n";
    return 0;
}