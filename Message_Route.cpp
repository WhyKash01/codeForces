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
void bfs(vector<vector<int>>&adj,vector<bool>&vis,int u, vector<int>&p){
    queue<int>q;
    q.push(u);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for (auto x:adj[curr])
        {
            if(!vis[x]){
                p[x]=curr;
                vis[x]=true;
                q.push(x);
            }
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
    vector<bool>vis(n+1,false);
    vector<int>p(n+1);
    vis[1]=true;

    bfs(adj,vis,1,p);
    if(vis[n]){
        vector<int>v;
        v.push_back(n);
        int curr=n;
        while(curr!=1){
            v.push_back(p[curr]);
            curr=p[curr];
        }
        cout<<v.size()<<endl;
        for (int i = v.size()-1; i >= 0; i--)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<"IMPOSSIBLE\n";
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