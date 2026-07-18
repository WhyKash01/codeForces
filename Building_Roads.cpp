#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
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
void dfs(vector<vector<int>>&adj,vector<int>&vis,int u){
    for (auto x:adj[u])
    {
        if(vis[x]==0){
            vis[x]=1;
            dfs(adj,vis,x);
        }
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<pair<int,int>>ans;
    vector<int>vis(n+1,0);
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]==0){
            vis[i]=1;
            dfs(adj,vis,i);
            if(i!=1){
                ans.push_back({1,i});
            }
        }
    }
    cout<<ans.size()<<endl;
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}