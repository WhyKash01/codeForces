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
    int n, k;
    cin >> n >> k;
    vector<vector<int>> a(n);
    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v, --u, --v;
        a[u].emplace_back(v);
        a[v].emplace_back(u);
    }
    int ans = 0;
    vector<int> sz(n, 1);
    auto dfs = [&](auto &dfs, int v, int p) -> void
    {
        for (int u : a[v])
        {
            if (u != p)
            {
                dfs(dfs, u, v);
                sz[v] += sz[u];
            }
        }
    };

    dfs(dfs, 0, -1);
    for (int i = 0; i < n; i++)
    {
        if (n - sz[i] >= k)
            ans += sz[i];
        if (sz[i] >= k)
            ans += n - sz[i];
    }
    cout << ans + n << '\n';
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
