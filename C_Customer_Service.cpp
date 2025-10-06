#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][n - j - 1];
        }
    }
    vector<ll> v;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] != 1)
            {
                break;
            }
            cnt++;
        }
        if (cnt > 0)
        {
            v.push_back(cnt);
            m[cnt]++;
        }
    }
    ll ans = 1;
    sort(v.begin(), v.end());
    if (v.size() == n)
    {
        ans=0;
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= ans)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    else
    {

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] >= ans)
            {
                ans++;
            }
        }
        cout << ans << endl;
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