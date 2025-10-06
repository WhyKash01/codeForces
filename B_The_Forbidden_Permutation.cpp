#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n, m, d;
    cin >> n >> m >> d;
    ll a[n], b[m];
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll ans = LLONG_MAX;
    for (int i = 0; i < m - 1; i++)
    {
        if (mp[b[i]] > mp[b[i + 1]])
        {
            ans = 0;
            break;
        }
        else
        {
            ans = min(ans, mp[b[i + 1]] - mp[b[i]]);
            if (mp[b[i + 1]] > mp[b[i]] + d)
            {
                ans = 0;
                break;
            }
            else
            {
                ll x = mp[b[i + 1]] - mp[b[i]] - 1;
                ll req = d - x;
                if (n > mp[b[i + 1]] - mp[b[i]] + req)
                {
                    ans = min(ans, req);
                }
            }
        }
    }
    cout<<ans<<endl;
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