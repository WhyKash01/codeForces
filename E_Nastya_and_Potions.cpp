#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 1000000007;
vector<int>dp;
vector<vector<int>>adj;
vector<int>used;
int get(int v){
    if(used[v]){
        return dp[v];
    }
    used[v]=1;
    int s=0;
    for(auto &e:adj[v]){
        s+=get(e);
    }
    if(!adj[v].empty()) dp[v] = min(dp[v], s);
    return dp[v];
}
void solve()
{
    int n,m;
    cin>>n>>m;
    dp.resize(n);
    adj.assign(n,vector<int>(0));
    used.assign(n,0);
    for(int i=0;i<n;i++){
        cin>>dp[i];
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        dp[x-1]=0;
    }
    for(int i=0;i<n;i++){
        int x;cin>>x;
        adj[i].resize(x);
        for(auto &e:adj[i]){
            cin>>e;
            e--;
        }
    }
    for(int i = 0; i < n; ++i){
        get(i);
    }
    for(int e: dp) cout << e << " ";
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}