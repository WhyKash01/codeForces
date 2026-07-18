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

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>adj(n+1);
    for (int i = 0; i < m; i++)
    {
        int x,y,d;
        cin>>x>>y>>d;
        adj[x].push_back({y,d});
    }
    vector<int>ans(n,LLONG_MAX);
    ans[0]=0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>q;
    q.push({0,1});
    while(!q.empty()){
        int dis=q.top().first;
        int curr=q.top().second;
        q.pop();
        if(dis>ans[curr-1])continue;
        for(auto x:adj[curr]){
            if(dis+x.second<ans[x.first-1]){
                ans[x.first-1]=dis+x.second;
                q.push({ans[x.first-1],x.first});
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
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