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
    for (int i = 0; i < m; i++)
    {
        int u,v,d;
        cin>>u>>v>>d;
        adj[u].push_back({v,d});
        adj[v].push_back({u,d});
    }
    map<pair<int,int>,int>mp;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        vector<int>v;
        for (int j = 0; j < x; j++)
        {
            int z;
            cin>>z;
            v.push_back(z);
        }
        int curr=-1;
        for (int j = x-1; j >=0; j--)
        {
            if (j == x - 1 || v[j] + 1 != v[j + 1])
            {
                curr = v[j] + 1;
            }
            mp[{i+1,v[j]}]=curr;
        }
    }
    vector<int>dis(n+1,inf);
    dis[1]=0;
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    int ans=-1;
    pq.push({0,1});
    while(!pq.empty()){
        auto [d,u]=pq.top();
        pq.pop();
        if (d > dis[u]) continue;
        if(u==n){
            ans=d;
            break;
        }
        for (auto [v,d2]:adj[u])
        {
            int d1=d+d2;
            if(mp[{u,d}]){
                d1=mp[{u,d}]+d2;
            }
            if(dis[v]>d1){
                dis[v]=d1;
                pq.push({d1,v});
            }
        }
    }
    cout<<ans<<endl;
    
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

    return 0;
}