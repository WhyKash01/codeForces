#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
void solve()
{
    ll n;
    cin >> n;
    pair<ll, ll> a[n];
    ll b[n], c[n];
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a, a + n);
    set<ll> v1, v2;
    for (int i = 1; i <= n; i++)
    {
        v1.insert(i);
        v2.insert(i);
    }

    bool f = true;
    for (int i = 0; i < n; i++)
    {
        if (v1.count(a[i].first))
        {
            b[a[i].second] = a[i].first;
            c[a[i].second] = *v2.begin();

            if (*v2.begin() > a[i].first)
            {
                f = false;
                break;
            }
            v2.erase(v2.begin());
            v1.erase(a[i].first);
        }
        else if (v2.count(a[i].first))
        {
            c[a[i].second] = a[i].first;
            b[a[i].second] = *v1.begin();
            if (*v1.begin() > a[i].first)
            {
                f = false;
                break;
            }
            v1.erase(v1.begin());
            v2.erase(a[i].first);
        }
        else
        {
            f = false;
            break;
        }
    }
    if (!f)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
        for (int i = 0; i < n; i++)
        {
            cout << c[i] << " ";
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