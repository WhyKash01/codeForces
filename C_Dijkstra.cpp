#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int,int>>>gh(n+1);
    priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        gh[x].push_back({y,z});
        gh[y].push_back({x,z});
    }
    pq.push({0,1});
    vector<int>dis(n+1,LLONG_MAX);
    dis[1]=0;
    vector<int>p(n+1,0);
    while(!pq.empty()){
        auto [d,v]=pq.top();
        pq.pop();
        if(v==n) break;
        for(auto x:gh[v]){
            if(dis[x.first]>d+x.second){
                dis[x.first]=d+x.second;
                pq.push({dis[x.first],x.first});
                p[x.first]=v;
            }
        }
    }
    int curr=n;
    vector<int>ans;
    while(curr!=0){
        if(p[curr]==0&&curr!=1){
            cout<<-1<<endl;
            return;
        }
        ans.pb(curr);
        curr=p[curr];
    }
    reverse(ans.begin(), ans.end());
    for (int i = 0; i < ans.size(); i++)
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