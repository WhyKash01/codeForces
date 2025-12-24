#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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

void solve()
{
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int p1 = 0, q1 = 0, p2 = 0, q2 = 0;
    int e = 0, r = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            e++;
            if (a[i] % 2 == 0)
            {
                p1 += a[i] / 2 + 1;
                q2 += a[i] / 2 - 1;
            }
            else
            {
                p1 += a[i] / 2 + 1;
                q2 += a[i] / 2;
            }
        }
        else
        {
            r++;
            if (a[i] % 2 == 0)
            {
                p2 += a[i] / 2 + 1;
                q1 += a[i] / 2 - 1;
            }
            else
            {
                p2 += a[i] / 2 + 1;
                q1 += a[i] / 2;
            }
        }
    }
    if (e == 0 && x >= y)
    {
        cout << "NO\n";
    }
    else if (r == 0 && x <= y && (p1 + p2 + q1 + q2 > (x + y)))
    {
        cout << "NO\n";
    }
    else if ((p1 + q1) <= x && (p2 + q2) <= y)
    {
        cout << "YES\n";
    }
    else if (p1 + q1 > x && p2 + q2 > y)
    {
        cout << "NO\n";
    }
    else if (p1 + q1 > x)
    {
        int z = p1 + q1 - x;
        if (q1 >= z && (p2 + q2 + z) <= y)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    else
    {
        int z = p2 + q2 - y;
        if (q2 >= z && (p1 + q1 + z) <= x)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
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
