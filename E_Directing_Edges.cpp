#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) * ((b) / std::__gcd(a, b)))
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int inf = LLONG_MAX;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    vector<int>in(n+1);
    for (int i = 0; i < m; i++)
    {
        int x,u,v;
        cin>>x>>u>>v;
        if(x==1){
            in[v]++;
            adj[u].push_back({v,1});
        }
        else{
            adj[u].push_back({v,0});
            adj[v].push_back({u,0});
        }
    }
    queue<int>q;
    vector<int>vis(n+1,0);
    for (int i = 0; i < n; i++)
    {
        if(in[i+1]==0){
            q.push(i+1);
            vis[i+1]=1;
        }
    }
    map<pair<int,int>,int>mp;
    vector<pair<int,int>>ans;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        
        for (auto& [v,z]:adj[u])
        {
            if(z==0){
                if(mp[{u,v}]==0){
                    ans.push_back({u,v});
                    mp[{v,u}]++;
                }
                if(vis[v]==0){
                    if(in[v]==0){
                        q.push(v);
                        vis[v]=1;
                    }
                }
            }
            else if(z==1){
                ans.push_back({u,v});
                in[v]--;
                if(in[v]==0){
                    if(vis[v]==0){
                        q.push(v);
                        vis[v]=1;
                    }
                }
            }
        }
    }
    if(ans.size()==m){
        cout<<"YES\n";
        for(auto [x,y]:ans){
            cout<<x<<" "<<y<<endl;
        }
    }
    else{
        cout<<"NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}