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
int MOD = 1e9 + 7;

void solve()
{
    int a, b, c, m;
    cin >> a >> b >> c >> m;
    int x1 = (m / a) * 6;
    int q1 = LCM(a, b);
    int q2 = LCM(a, c);
    int e1 = m / q1;
    int e2 = m / q2;
    x1 -= e1 * 3;
    x1 -= e2 * 3;
    int z = LCM(a, b);
    z = LCM(z, c);
    x1 += (m / z) * 2;
    int x2 = (m / b) * 6;
    q1 = LCM(a, b);
    q2 = LCM(b, c);
    e1 = m / q1;
    e2 = m / q2;
    x2 -= e1 * 3;
    x2 -= e2 * 3;
    z = LCM(a, b);
    z = LCM(z, c);
    x2 += (m / z) * 2;
    int x3 = (m / c) * 6;
    q1 = LCM(a, c);
    q2 = LCM(b, c);
    e1 = m / q1;
    e2 = m / q2;
    x3 -= e1 * 3;
    x3 -= e2 * 3;
    z = LCM(a, b);
    z = LCM(z, c);
    x3 += (m / z) * 2;
    cout << x1 << " " << x2 << " "<<x3 << endl;
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