#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{

    ll b, c, d;
    cin >> b >> c >> d;
    ll z = b ^ d;
    ll p = z | b;
    ll q = z & c;
    if (p - q == d)
    {
        cout << z << endl;
    }
    else
    {
        cout << -1 << endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}