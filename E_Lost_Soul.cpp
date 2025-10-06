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
int M = 998244353;

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    map<int, pair<int, int>> m1, m2;
    for (int i = 0; i < n; i++)
    {
        if (m1[a[i]].first != 0)
        {
            m1[a[i]].second = m1[a[i]].first;
            m1[a[i]].first = i + 1;
        }
        else
        {
            m1[a[i]].first = i + 1;
        }
        if (m2[b[i]].first != 0)
        {
            m2[b[i]].second = m2[b[i]].first;
            m2[b[i]].first = i + 1;
        }
        else
        {
            m2[b[i]].first = i + 1;
        }
    }
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        x = max(x, max(m1[a[i]].second, m2[a[i]].second));
        x = max(x, max(m1[b[i]].second, m2[b[i]].second));
        if ((m1[a[i]].first != m2[a[i]].first + 1) && (m1[a[i]].first + 1 != m2[a[i]].first))
        {
            x = max(x, min(m1[a[i]].first, m2[a[i]].first));
        }
        if ((m1[b[i]].first != m2[b[i]].first + 1) && (m1[b[i]].first + 1 != m2[b[i]].first))
        {
            x = max(x, min(m1[b[i]].first, m2[b[i]].first));
        }
    }
    cout << x << endl;
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
