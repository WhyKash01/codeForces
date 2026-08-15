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
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int dfs(vector<vector<int>> &adj, int curr, vector<int> &v, int p)
{
    if (v[curr])
    {
        return 0;
    }
    v[curr]++;
    if (adj[curr].size() != 2)
    {
        p = 0;
    }
    for (auto z : adj[curr])
    {
        if (v[z] == 0)
        {
            int y = dfs(adj, z, v, p);
            p = p && y;
        }
    }
    return p;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans = 0;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        ans += dfs(adj, i, v, 1);
    }
    cout << ans << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}