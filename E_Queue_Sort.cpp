#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll it = -1;
    for (int i = 1; i < n; i++)
    {
        if (a[i] < a[i - 1])
        {
            it = i;
        }
    }
    if (it == -1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll ans = 0;
        bool f = true;
        for (int i = 0; i < it; i++)
        {
            if (a[i] <= a[it])
            {
                f = false;
                break;
            }
            else
            {
                ans++;
            }
        }
        if (f)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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