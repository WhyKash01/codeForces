#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<ll, ll> m;
    for (int i = 0; i < n; i++)
    {
        ll x1, y1;
        cin >> x1 >> y1;
        if (x1 == 1)
        {

            ll curr = y1;
            while (m[curr] == 2)
            {
                m[curr]=1;
                curr++;
            }
            m[curr]++;
        }
        else
        {

            bool f = true;
            map<ll, ll> temp = m;
            ll x = y1;

            while (x != 0)
            {
                ll y = log2l(x);

                if (temp[y] > 0)
                {
                    // cout << y << " " << temp[y] << endl;
                    temp[y]--;
                    x -= powl(2, y);
                }
                else if (temp[y - 1] > 0)
                {
                    // cout << y << " " << temp[y - 1] << endl;
                    if (temp[y - 1] == 2)
                    {
                        temp[y - 1] = 0;
                        x -= powl(2, y);
                    }
                    else
                    {
                        temp[y - 1] = 0;
                        x -= powl(2, y - 1);
                    }
                }
                else
                {
                    // cout << x << " " << temp[y] << endl;
                    f = false;
                    break;
                }
            }

            if (f)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}