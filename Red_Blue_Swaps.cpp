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
#define ppb pop_back
#define inp(v)        \
    for (auto &i : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
const int MOD = 998244353;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<int> b(n);
    for (int i = 0; i < n; i++)
        cin >> b[i];
    vector<pair<int, int>> R, B;
    for (int i = 0; i < n; i++)
    {
        if (b[i] == 0)
        {
            R.push_back({a[i], i});
        }
        else
        {
            B.push_back({a[i], i});
        }
    }
    int cnt1 = R.size();
    int cnt2 = B.size();
    vector<int> P(cnt1 + 1, 0);
    for (int i = 1; i <= cnt1; i++)
    {
        for (int j = 1; j <= cnt2; j++)
        {
            if (B[j - 1].second < R[i - 1].second && B[j - 1].first > R[i - 1].first)
            {
                P[i] = max(P[i], j);
            }
        }
    }
    vector<int> q(cnt2 + 1, 0);
    for (int j = 1; j <= cnt2; j++)
    {
        for (int i = 1; i <= cnt1; i++)
        {
            if (R[i - 1].second < B[j - 1].second && R[i - 1].first < B[j - 1].first)
            {
                q[j] = max(q[j], i);
            }
        }
    }
    vector<int> dp(cnt2 + 1, 0);
    dp[0] = 1;
    for (int j = 0; j < cnt2; j++)
    {
        if (0 >= q[j + 1])
        {
            dp[j + 1] = (dp[j + 1] + dp[j]) % MOD;
        }
    }
    for (int i = 0; i < cnt1; i++)
    {
        vector<int> dp1(cnt2 + 1, 0);
        for (int j = 0; j <= cnt2; j++)
        {
            if (j >= P[i + 1])
            {
                dp1[j] = dp[j];
            }
        }
        for (int j = 0; j < cnt2; j++)
        {
            if ((i + 1) >= q[j + 1])
            {
                dp1[j + 1] = (dp1[j + 1] + dp1[j]) % MOD;
            }
        }
        dp = dp1;
    }
    cout << dp[cnt2] << endl;
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