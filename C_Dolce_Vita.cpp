#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    ll a[n + 1];
    ll sum = 0;
    a[0] = -1;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    ll day = 0;
    ll ans = 0;
    sort(a, a + n + 1);
    for (int i = 1; i <= n; i++)
    {
        sum += a[i];
        a[i] = sum;
    }
    if (a[1] > x)
    {
        cout << 0 << endl;
    }
    else
    {
        for (int i = n; i >= 1; i--)
        {
            ll w = a[i] + i * day;
            if(a[1]+day>x){
                break;
            }
            if(w>x){
                continue;
            }
            ll k = (x - w) / i;
            ans += (k + 1) * i;
            day += (k + 1);
        }

        cout << max(ans, 0ll) << endl;
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