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
int M = 1e9+7;

void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp (n+1,vector<int>(m+1,0));
    for (int i = 0; i <= n; i++)
    {
        dp[i][0]=i;
    }
    for (int i = 0; i <= m; i++)
    {
        dp[0][i]=i;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int x=a[i-1];
            int y=b[j-1];
            if(x==y){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                dp[i][j]=dp[i-1][j-1]+1;
            }
            dp[i][j]=min(dp[i][j],dp[i][j-1]+1);
            dp[i][j]=min(dp[i][j],dp[i-1][j]+1);
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
    while (t--)
    {
        solve();
    }
}
