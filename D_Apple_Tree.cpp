#include <bits/stdc++.h>
#define ll long long
#define int long long int
using namespace std;
const int N=2e5+10;
vector<vector<int>> graph;
vector<int> leaves;
 
int dfs(int node,int par)
{
    if(graph[node].size()==1 and node!=1) return leaves[node]=1;
    int cnt=0;
    for(auto it:graph[node])
    {
        if(it!=par)
        {
            cnt+=dfs(it,node);
        }
    } 
    return leaves[node]=cnt;
}
void solve()
{
    int n; cin>>n;
    graph.clear(); leaves.clear();
    graph.resize(n+1);
    leaves.resize(n+1);
    for(int i=0;i<n-1;i++)
    {
        int u,v; cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1,-1);
    int q; cin>>q;
    while(q--)
    {
        int u,v; cin>>u>>v;
        cout<<leaves[u]*leaves[v]<<endl;
    }
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}