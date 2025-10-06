#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 998244353;
int p[200010];
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int o = 0, e = 0;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans = ((ans % M) + (p[e] % M)) % M;
            e++;
            o = 0;
        }
        else
        {
            ans = ((ans % M) + (p[o] % M)) % M;
            o++;
            e = 0;
        }
    }
    cout << ans << endl;
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    p[0] = 1;
    for (int i = 1; i < 200010; i++)
    {
        p[i] = ((p[i - 1] % M) * 2) % M;
    }
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
