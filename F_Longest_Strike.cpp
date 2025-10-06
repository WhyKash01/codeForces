#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n, k;
    cin >> n >> k;
    ll a[n];
    set<ll> s;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
        s.insert(a[i]);
    }
    ll ans = -1;
    ll low = -1, high = -1;
    ll x = -1, y = -1;
    ll curr = 0;
    for (auto i : s)
    {
        if (curr == 0)
        {
            if (m[i] >= k)
            {
                low = i;
                high = i;
                curr++;
                if (curr > ans)
                {
                    x = low, y = high;
                    ans = curr;
                }
            }
        }
        else
        {
            if ((i - 1 == high) && (m[i] >= k))
            {
                high++;
                curr++;
                if (curr > ans)
                {
                    x = low, y = high;
                    ans = curr;
                }
            }
            else
            {
                curr = 0;
                if (m[i] >= k)
                {
                    low = i;
                    high = i;
                    curr++;
                    if (curr > ans)
                    {
                        x = low, y = high;
                        ans = curr;
                    }
                }
            }
        }
    }
    if (ans != -1)
    {
        cout << x << " " << y << endl;
    }
    else
    {
        cout << "-1" << endl;
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