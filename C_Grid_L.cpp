#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;

void solve()
{
    int p, q;
    cin >> p >> q;
    int a = p + 2 * q;
    int x = 2 * a + 1;

    bool f = false;
    int curr = sqrt(x);
    int r, c;
    for (int i = 3; i <= curr; i++)
    {
        if (x % i == 0)
        {
            int B = x / i;
            int n = (i - 1) / 2;
            int m = (B - 1) / 2;

            if (n > 0 && m > 0)
            {
                int Max = min(n * (m + 1), m * (n + 1));
                if (q <= Max)
                {
                    r = n, c = m;
                    f = true;
                    break;
                }
            }
        }
    }
    if (!f)
    {
        cout << "-1" << endl;
    }
    else
    {
        cout << r << " " << c << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}