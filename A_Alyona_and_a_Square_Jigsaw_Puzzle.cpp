#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            cin >> a[i];
        }
        else
        {
            cin >> a[i];
            a[i] += a[i - 1];
        }
    }
    ll cnt = 0;
    for (int i = 0; i < n; i++)
    {
        ll x = sqrt(a[i]);
        if (x * x == a[i])
        {
            if (x % 2 != 0)
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
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