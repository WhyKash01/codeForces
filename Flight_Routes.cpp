#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int INF = 1e9+7;
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<vector<pair<int,int>>>adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }
    priority_queue<pair<int,int>,vector<pii>,greater<pii>>pq;
    pq.push({0,1});
    vector<priority_queue<int>> dis(n + 1);
    dis[1].push(0);
    vector<int>ans;
    while (!pq.empty())
    {
        auto [d,u]=pq.top();
        pq.pop();
        if (dis[u].size() == k && d > dis[u].top()) {
            continue;
        }
        for (auto [v,w]:adj[u])
        {
            if (dis[v].size() < k) {
                dis[v].push(d+w);
                pq.push({d+w, v});
            }
            else if (d+w < dis[v].top()) {
                dis[v].pop(); 
                dis[v].push(w+d); 
                pq.push({d+w, v});
            }
        }
    }
    while (!dis[n].empty()) {
        ans.push_back(dis[n].top());
        dis[n].pop();
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < k; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}