#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin >> n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll curr = 0;
    ll ans = 0;
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = i; j < n - 2 * i - 1 + i; j++)
        {

            char b[4];
            b[0] = a[i][j], b[1] = a[n - j - 1][i], b[2] = a[j][n - i - 1], b[3] = a[n - i - 1][n - j - 1];
            ll o = 0, e = 0;
            for (int i = 0; i < 4; i++)
            {

                if (b[i] == '0')
                {
                    o++;
                }
                else
                {
                    e++;
                }
            }
            ans += min(o, e);
        }
    }
    cout << ans << endl;

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