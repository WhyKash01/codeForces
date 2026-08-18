#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) * ((b) / std::__gcd(a, b)))
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

vi bfs(vector<vector<int>> &adj, int root, int n)
{
    vector<int> v(n + 1, 0);
    queue<pair<int, int>> q;
    q.push({root, 0});
    vector<int> vis(n+1, 0);
    vis[root] = 1;
    while (!q.empty())
    {
        auto [u, d] = q.front();
        q.pop();
        v[u] = d;
        for (auto w : adj[u])
        {
            if (vis[w] == 0)
            {
                q.push({w, d + 1});
                vis[w] = 1;
            }
        }
    }
    return v;
}
void solve()
{
    int n, m, a, b, c;
    cin >> n >> m >> a >> b >> c;
    int ac[m];
    for (int i = 0; i < m; i++)
    {
        cin >> ac[i];
    }
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vi v1 = bfs(adj, a, n);
    vi v2 = bfs(adj, b, n);
    vi v3 = bfs(adj, c, n);
    vector<vector<int>> res(n + 1, vector<int>(3, 0));
    for (int i = 1; i <= n; i++)
    {
        res[i][0] = v2[b];
        res[i][1] = v1[a];
        res[i][2] = v3[c];
    }
    sort(ac, ac + m);
    vi pref(m + 1, 0);
    for (int i = 0; i < m; i++)
    {
        pref[i + 1] = pref[i] + ac[i];
    }
    int ans = LLONG_MAX;
    for (int i = 1; i <= n; i++)
    {
        int da=v1[i];
        int db=v2[i];
        int dc=v3[i];
        if(da+db+dc>m) continue;
        int tot=da+db+dc;
        int c=pref[db]+pref[tot];
        ans=min(ans,c);
    }
    cout << ans << endl;
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

    return 0;
}