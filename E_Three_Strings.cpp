#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
#define int64_t long long
#define pii pair<int64_t, int64_t>
#define fr first
#define sc second
#define vi vector<int64_t>
#define vvi vector<vector<int64_t>>
#define vpii vector<pair<int64_t, int64_t>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int64_t i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

void solve() 
{
    string a,b,c;
    cin>>a>>b>>c;
    int n=a.size(),m=b.size();
    vector<vector<int>>dp(n+1,vector<int>(m+1,1e9));
    dp[0][0]=0;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if(i<n){
                int cost=(a[i]!=c[i+j])?1:0;
                dp[i+1][j]=min(dp[i+1][j],dp[i][j]+cost);
            }
            if(j<m){
                int cost=(b[j]!=c[i+j])?1:0;
                dp[i][j+1]=min(dp[i][j+1],dp[i][j]+cost);
            }
        }
    }
    cout<<dp[n][m]<<endl;
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
}
