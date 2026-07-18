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
int dp[2][1000000+2];
void solve()
{
    int n;
    cin>>n;
    cout<<(dp[0][n]+dp[1][n])%M<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    dp[0][1]=1;
    dp[1][1]=1;
    for (int i = 2; i <=1000000 ; i++)
    {
        dp[0][i]=(4*dp[0][i-1]+dp[1][i-1])%M;
        dp[1][i]=(dp[0][i-1]+2*dp[1][i-1])%M;
    }
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
