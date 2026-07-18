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
int M = 998244353;

void solve()
{
    int n;
    int x;
    cin >> n >> x;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    partial_sum(a.begin() + 1, a.end(), a.begin() + 1);
    vector<int> dp(n + 2);
    for (int i = n - 1; i >= 0; --i)
    {
        int q = upper_bound(a.begin(), a.end(), a[i] + x) - a.begin();
        dp[i] = dp[q] + q - i - 1;
    }
    cout << accumulate(dp.begin(), dp.end(), 0ll) << '\n';
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
