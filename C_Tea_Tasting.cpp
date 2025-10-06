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
    vector<int> a(n), b(n);
    for (auto& x : a) cin >> x;
    for (auto& x : b) cin >> x;
    vector<int> sum(n + 1);
    for (int i = 0; i < n; ++i) sum[i + 1] = sum[i] + b[i];
    vector<int> cnt(n + 1), add(n + 1);
    for (int i = 0; i < n; ++i) {
      int j = upper_bound(sum.begin(), sum.end(), a[i] + sum[i]) - sum.begin() - 1;
      cnt[i] += 1;
      cnt[j] -= 1;
      add[j] += a[i] - sum[j] + sum[i];
    }
    for (int i = 0; i < n; ++i) {
      cout << cnt[i] * b[i] + add[i] << ' ';
      cnt[i + 1] += cnt[i];   
    }
    cout << '\n';
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
