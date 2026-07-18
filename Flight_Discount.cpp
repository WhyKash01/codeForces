#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
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
int INF= 1e14;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n);
    vector<vector<int>>dis(n,vector<int>(2,INF));
    dis[0][0]=0;
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        adj[x-1].push_back({y-1,z});
    }
    priority_queue<pip,vector<pip>,greater<pip>>pq;
    pq.push({0,{0,0}});
    while(!pq.empty()){
        auto [d, p1] = pq.top(); 
        auto [u, g] = p1;        
        pq.pop();
        if(d>dis[u][g]){
            continue;
        }
        for (auto [v,d1]: adj[u])
        {
            if(g==0){
                if(d+d1<dis[v][0]){
                    dis[v][0]=d+d1;
                    pq.push({dis[v][0],{v,0}});
                }
                if(d+d1/2<dis[v][1]){
                    dis[v][1]=d+d1/2;
                    pq.push({dis[v][1],{v,1}});
                }
            }
            else{
                if(d+d1<dis[v][1]){
                    dis[v][1]=d+d1;
                    pq.push({dis[v][1],{v,1}});
                }
            }
            
        }
    }
    cout<<dis[n-1][1]<<endl;
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