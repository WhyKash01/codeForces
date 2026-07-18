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
vector<int>state;
vector<vector<int>>adj;
vector<int>parent;
int startn=-1;
int endn=-1;
bool dfs(int u){
    state[u]=1;
    for (auto v:adj[u])
    {
        if(state[v]==0){
            parent[v]=u;
            if(dfs(v)){
                return true;
            }
        }
        else if(state[v]==1){
            startn=v;
            endn=u;
            return true;
        }
    }
    state[u]=2;
    return false;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    adj.resize(n+1);
    state.assign(n+1,0);
    parent.assign(n+1,-1);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++)
    {
        if(state[i]==0){
            if(dfs(i)){
                break;
            }
        }
    }
    if(startn==-1){
        cout<<"IMPOSSIBLE\n";
    }
    else{
        vector<int>ans;
        ans.push_back(startn);
        int curr=endn;
        while(curr!=startn){
            ans.push_back(curr);
            curr=parent[curr];
        }
        cout<<ans.size()+1<<endl;
        ans.push_back(startn);
        reverse(ans.begin(),ans.end());
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    
    
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