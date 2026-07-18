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
    int n, k, x;
    cin >> n >> k >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);
    int e = 0;
    set<pair<int, pair<int, int>>> s;
    s.insert({-a[0], {e, e + 1}});
    s.insert({-(x - a[n - 1]), {x, e - 1}});
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i + 1] - a[i] > 1)
        {
            if (a[i + 1] % 2 == a[i] % 2)
            {
                int z = (a[i + 1] + a[i]) / 2;
                s.insert({-(a[i + 1] - z), {z, e}});
                s.insert({-(a[i + 1] - z - 1), {z - 1, e - 1}});
                s.insert({(a[i + 1] - z - 1), {z + 1, e + 1}});
            }
            else
            {
                int z = (a[i + 1] + a[i]) / 2;
                s.insert({-(z - a[i]), {z, e - 1}});
                s.insert({-(z - a[i]), {z + 1, e + 1}});
            }
        }
        else
        {
            s.insert({e, {a[i], e}});
            s.insert({e, {a[i + 1], e}});
        }
    }
    set<int> v;
    while (k > 0)
    {
        int d = -s.begin()->first;
        int p = s.begin()->second.first;
        int q = s.begin()->second.second;

        s.erase(s.begin());
        if (v.find(p) == v.end())
        {
            v.insert(p);
            k--;
            if (d > 0 && q != 0)
            {
                s.insert({-(d - 1), {p + q, q}});
            }
        }
    }
    for (auto x : v)
    {
        cout << x << " ";
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
