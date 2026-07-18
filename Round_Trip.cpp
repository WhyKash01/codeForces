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
int MOD = 1e9 + 7;
pair<int, int> bfs(vector<vector<int>> &adj, vector<bool> &vis, int u, vector<int> &p)
{
    queue<int> q;
    q.push(u);
    while (!q.empty())
    {
        int curr = q.front();
        int z = p[curr];
        q.pop();
        for (auto x : adj[curr])
        {
            if (!vis[x])
            {
                p[x] = curr;
                vis[x] = true;
                q.push(x);
            }
            else if (x != z)
            {
                return {curr, x};
            }
        }
    }
    return {-1, -1};
}
void solve()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int> p(n + 1);
    vector<bool> vis(n + 1, false);
    pair<int, int> pr = {-1, -1};
    for (int i = 1; i <= n; i++)
    {
        pair<int, int> q = {-1, -1};
        if (!vis[i])
        {
            vis[i] = true;
            p[i] = 0;
            q = bfs(adj, vis, i, p);
        }
        if (q.first != -1)
        {
            pr = q;
            break;
        }
    }

    if (pr.first != -1)
    {
        vector<int> v1, v2;
        int x = pr.first, y = pr.second;
        v1.push_back(x);
        v2.push_back(y);
        vector<bool> v(n + 1, false);
        while (p[x] != 0)
        {
            v1.push_back(p[x]);
            x = p[x];
        }
        while (p[y] != 0)
        {
            v2.push_back(p[y]);
            y = p[y];
        }
        for (auto x : v1)
        {
            v[x] = true;
        }
        int z = -1;
        for (auto x : v2)
        {
            if (v[x])
            {
                z = x;
                break;
            }
        }
        vector<int> ans;
        bool k = false;
        int l = v1.size();
        for (int i = l - 1; i >= 0; i--)
        {
            if (v1[i] == z)
            {
                ans.push_back(z);
                k = true;
            }
            else if (k)
            {
                ans.push_back(v1[i]);
            }
        }
        for (auto x : v2)
        {
            if (x == z)
            {
                ans.push_back(x);
                break;
            }
            else
            {
                ans.push_back(x);
            }
        }
        cout << ans.size() << endl;
        int lr = ans.size();
        for (int i = 0; i < lr; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "IMPOSSIBLE\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}