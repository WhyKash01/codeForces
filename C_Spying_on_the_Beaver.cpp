#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int inf = LLONG_MAX;
void solve()
{
    int n;
    cin >> n;
    vector<int> d(n + 1, 0);
    for (int i = 1; i < n; i++)
    {
        int p;
        cin >> p;
        d[i + 1] = d[p] + 1;
    }
    int m;
    cin >> m;
    vector<int> a(m);
    for (int i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    if (m <= 1)
    {
        cout << 0 << "\n";
        return;
    }
    int Min = 1e9;
    int f = -1;

    for (int i = 0; i < m; i++)
    {
        if (d[a[i]] < Min)
        {
            Min = d[a[i]];
            f = i;
        }
    }
    cout << m - 1 << " ";
    for (int i = 0; i < m; i++)
    {
        if (i != f)
        {
            cout << a[i] << " ";
        }
    }
    cout << endl;
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