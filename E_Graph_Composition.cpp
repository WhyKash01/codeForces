#include <bits/stdc++.h>
#define ll long long
#define int long long int
using namespace std;
const int N=2e5+10;
vector<vector<int>> g;
vector<vector<int>> f;
vector<bool>vis;
vector<bool>vis2;
bool dfs(int node,int find,bool x)
{
    vis[node]=true;
    if(x){
        return true;
    }
    if(node==find){
        return true;
    }
    bool ans=false;
    for(auto it:g[node])
    {
        if(vis[it]==true){
            continue;
        }
        ans|=dfs(it,find,ans);
    } 
    return ans;
}
bool dfsf(int node,int find,bool x)
{
    vis2[node]=true;
    if(x){
        return true;
    }
    if(node==find){
        return true;
    }
    bool ans=false;
    for(auto it:f[node])
    {
        if(vis2[it]==true){
            continue;
        }
        ans|=dfsf(it,find,ans);
    } 
    return ans;
}
void solve()
{
    int n,m1,m2; cin>>n>>m1>>m2;
    g.clear(); f.clear();vis.clear();
    vis.resize(n+1);
    g.resize(n+1);
    f.resize(n+1);
    for(int i=0;i<m1;i++)
    {
        int u,v; cin>>u>>v;
        f[u].push_back(v);
        f[v].push_back(u);
    }
    for(int i=0;i<m2;i++)
    {
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    ll ans=0;
    for (int i = 0; i < m1; i++)
    {
        /* code */
    }
    
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}