#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
int M = 998244353;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>dp(n+1,vector<int>(m+1,1e9));
    for (int i = 1; i <= min(n,m); i++)
    {
        dp[i][i]=1;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if(i!=j){
                for (int k = 1; k < i; k++)
                {
                    int x=k,y=i-x;
                    dp[i][j]=min(dp[i][j],dp[x][j]+dp[y][j]);
                }
                for (int k = 1; k < j; k++)
                {
                    int x=k,y=j-k;
                    dp[i][j]=min(dp[i][j],dp[i][x]+dp[i][y]);
                }
            }
        }
    }
    cout<<dp[n][m]-1<<endl;
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
