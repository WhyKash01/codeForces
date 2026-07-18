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
    int n;
    cin>>n;
    vector<int>a(n+1,0);
    vector<int>dp(n+1,0);
    dp[0]=1;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    if(a[1]==0){
        dp[1]=1;
    }
    for (int i = 2; i <= n; i++)
    {
        if(a[i]==a[i-1]){
            dp[i]=(dp[i]+dp[i-1])%M;
        }
        if(a[i]==a[i-2]+1){
            dp[i]=(dp[i]+dp[i-2])%M;
        }
    }
    cout<<(dp[n-1]+dp[n])%M<<endl;
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
