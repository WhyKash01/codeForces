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
int M = 998244353;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int x = 0, y = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (s[0] == s[i])
        {
            x = i;
        }
        else
        {
            break;
        }
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if (s[n - 1] == s[i])
        {
            y = i;
        }
        else
        {
            break;
        }
    }
    if (x > y)
    {
        cout << n << endl;
    }
    else if (s[0] == s[n - 1])
    {
        cout << x + 1 + (n - (y)) << endl;
    }
    else
    {
        if (x + 1 == y)
        {
            cout << n << endl;
        }
        else if (s[0] == s[y - 1] || s[n - 1] == s[x + 1])
        {
            cout << x + 2 + (n - y) << endl;
        }
        else
        {
            cout << x + 1 + (n - (y)) << endl;
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
