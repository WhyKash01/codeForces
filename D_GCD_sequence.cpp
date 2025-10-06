#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 1e9 + 7;
int ans(vector<int> a)
{
    for (int i = 0; i < a.size() - 2; i++)
    {
        if (__gcd(a[i], a[i + 1]) > __gcd(a[i + 1], a[i + 2]))
        {
            return i + 1;
        }
    }
    return -1;
}
void solve()
{
    int n, x;
    cin >> n;
    vector<int> a, b;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }

    if (ans(a) == -1)
    {
        cout << "YES" << endl;
    }
    else
    {
        bool f = 0;
        for (int i = ans(a) - 1; i <= ans(a) + 1; i++)
        {
            if (i >= 0 and i <= n - 1)
            {
                b = a;
                b.erase(b.begin() + i);
                if (ans(b) == -1)
                    f = 1;
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
    return;
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
