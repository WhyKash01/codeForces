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
    string s;
    cin >> s;
    int n = s.size();
    s = " " + s;
    vector<int> P(n + 1, 0);

    for (int i = 1; i <= n; i++){
        P[i] = (s[i] == '1' ? 1 : -1) + P[i - 1];
    }

    map<int, int> cnt;
    int ans = 0;

    for (int i = 0; i <= n; i++){
        ans = (ans + (n - i + 1) * cnt[P[i]]) % M;
        cnt[P[i]] = (cnt[P[i]] + (i + 1)) % M;
    }
    cout << ans << "\n";
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
