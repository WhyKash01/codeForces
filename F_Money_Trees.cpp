#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    if (n == 1)
    {
        if (a[0] <= k)
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    else
    {
        vector<vector<ll>> v;
        vector<ll> temp;
        for (int i = 0; i < n - 1; i++)
        {
            if (b[i] % b[i + 1] == 0)
            {
                if (temp.size() == 0)
                {
                    temp.push_back(a[i]);
                }
                temp.push_back(a[i + 1]);
            }
            else
            {
                if (temp.size() == 0)
                {
                    temp.push_back(a[i]);
                }
                v.push_back(temp);
                temp.clear();
                temp.push_back(a[i + 1]);
            }
        }
        if (temp.size() > 0)
        {
            v.push_back(temp);
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            ll sum = v[i][0];
            ll l = 0, r = l + 1;
            while (l < v[i].size())
            {
                while (sum <= k && r < v[i].size())
                {
                    sum += v[i][r];
                    r++;
                }
                ll len = r - l - 1;
                if (sum <= k)
                {
                    len++;
                }
                ans = max(ans, len);
                sum -= v[i][l];
                l++;
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