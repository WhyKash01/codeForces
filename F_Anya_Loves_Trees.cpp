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
#define mod 998244353

int l[200005];
int r[200005];

int subtree[200005];
int a[200005];

int poss = 1;
vector<int> adj[200005];
void DFS(int u, int p)
{
    subtree[u] = 0;
    l[u] = 1e15;
    r[u] = -1e15;

    vector<int> v;

    for (auto x : adj[u])
    {
        if (x == p)
        {
            continue;
        }
        DFS(x, u);
        subtree[u] += subtree[x];
        l[u] = min(l[u], l[x]);
        r[u] = max(r[u], r[x]);
        v.push_back(l[x]);
    }
    if (subtree[u] == 0)
    {
        subtree[u]++;
        r[u] = a[u];
        l[u] = a[u];
        return;
    }

    if ((r[u] - l[u] + 1) != subtree[u])
    {
        poss = 0;
        return;
    }

    int z = v.size();
    int bads = 0;
    for (int i = 0; i < z; i++)
    {
        if (v[i] > v[(i + 1) % z])
        {
            bads++;
        }
    }
    if (bads > 1)
    {
        poss = 0;
        return;
    }
}
void solve()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        adj[i].clear();
    }
    for (int i = 0; i < n - 1; i++)
    {
        int u = i + 2;
        int v;
        cin >> v;
        u--;
        v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    for (int i = 0; i < n; i++)
    {
        sort(adj[i].begin(), adj[i].end());
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    poss = 1;
    DFS(0, -1);

    if (poss)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
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