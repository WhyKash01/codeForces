#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    string s1, s2;
    cin >> s1 >> s2;
    bool ans = true, f = true;
    ll low = -1, high = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == 'W' && s2[i] == 'W')
        {
            ans = false;
            break;
        }
        else if (s1[i] == s2[i])
        {
            a[i] = 2;
        }
        else
        {
            if (low == -1)
            {
                low = i;
            }
            high = i;
            a[i] = 1;
        }
    }
    if (low == -1)
    {
        cout << "YES" << endl;
    }
    else if (!ans)
    {
        cout << "NO" << endl;
    }
    else
    {
        for (int i = low; i <= high; i++)
        {
            if (a[i] == 1)
            {
                if (i == low)
                {
                    if (s1[i] == 'W')
                    {
                        f = false;
                    }
                }
                else
                {
                    if (f && s1[i] == 'W')
                    {
                        ans = false;
                        break;
                    }
                    else if (!f && s2[i] == 'W')
                    {
                        ans = false;
                        break;
                    }
                }
            }
            else
            {
                f = !f;
            }
        }
        if (ans)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
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