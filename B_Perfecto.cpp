#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
void solve()
{
    ll n;
    cin >> n;
    bool f = false;
    ll a[n];
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        ll x = i * (i + 1) / 2;
        ll z = sqrtl(x);
        if (z * z == x)
        {
            f = true;
            a[i - 1] = i + 1;
            ans += i + 1;
        }
        else if (f)
        {
            f = false;
            a[i - 1] = i - 1;
            ans += i - 1;
        }
        else
        {
            a[i - 1] = i;
            ans += i;
        }
    }
    if (f)
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            cout << a[i] << " ";
        }
        cout << endl;
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