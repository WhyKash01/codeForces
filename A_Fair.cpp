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
int inf=LLONG_MAX;
void solve()
{
    int n,m,k,s;
    cin>>n>>m>>k>>s;
    vector<int>g(n);
    for(int i=0;i<n;i++){
        cin>>g[i];
        g[i]--;
    }
    vvi adj(n);
    for (int i = 0; i < m; i++)
    {
        int u,v;
        cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vvi dp(n,vi(k,inf));
    for(int i=0;i<k;i++){
        queue<int>q;
        for(int j=0;j<n;j++){
            if(g[j]==i){
                dp[j][i]=0;
                q.push(j);
            }
        }
        while(!q.empty()){
            int curr=q.front();
            q.pop();
            
            for(auto x:adj[curr]){
                if(dp[x][i]==inf){
                    q.push(x);
                    dp[x][i]=dp[curr][i]+1;
                }
            }
        }
    }
    vi v(k);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            v[j]=dp[i][j];
        }
        sort(v.begin(),v.end());
        int ans=0;
        for (int i = 0; i < s; i++)
        {
            ans+=v[i];
        }
        cout<<ans<<" ";
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