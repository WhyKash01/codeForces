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
const long long INF = 1e17;

struct Edge {
    int u, v;
    long long w;
};
void solve()
{
    int n, m;
    cin>>n>>m;

    vector<Edge> edges(m);
    for (int i = 0; i < m; ++i) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    vector<long long> dist(n + 1, -INF);
    dist[1] = 0;

    for (int i = 1; i < n; ++i) {
        for (const auto& edge : edges) {
            if (dist[edge.u] != -INF && dist[edge.u] + edge.w > dist[edge.v]) {
                dist[edge.v] = dist[edge.u] + edge.w;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        for (const auto& edge : edges) {
            if (dist[edge.u] == INF) {
                dist[edge.v] = INF;
            }
            else if (dist[edge.u] != -INF && dist[edge.u] + edge.w > dist[edge.v]) {
                dist[edge.v] = INF;
            }
        }
    }
    if (dist[n] == INF) {
        cout << -1 << "\n";
    } else {
        cout << dist[n] << "\n";
    }
    
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