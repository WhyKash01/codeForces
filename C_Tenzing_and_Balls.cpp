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

void solve()
{
    int n;
    cin >> n;
    vector<int> dp(n + 1, LLONG_MIN), a(n);
    dp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        int v = dp[a[i]];
        dp[a[i]] = max(dp[a[i]], dp[0] - i);
        dp[0] = max(dp[0], v + i + 1);
    }
    cout << dp[0] << endl;
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