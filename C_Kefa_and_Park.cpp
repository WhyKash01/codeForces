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
int dfs(vector<vector<int>> &adj, int curr, int x, vector<int> &cats, int k, int p)
{
    if (cats[curr - 1] == 0) x = 0;
    else x++;
    if (x > k) return 0;
    if ((adj[curr].size() == 1&&curr!=1)) return 1;
    int ans = 0;
    for (auto z : adj[curr])
    {
        if (z != p) ans += dfs(adj, z, x, cats, k, curr);
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> cats(n);
    for (int i = 0; i < n; i++)
    {
        cin >> cats[i];
    }

    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < n - 1; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int p = -1;
    int ans = dfs(adj, 1, 0, cats, k, p);
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