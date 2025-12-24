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
const int noob = 2e5 + 69;
vector <int> adj[noob];
bool vis[noob];
 
int dfs(int u)
{
    vis[u] = true;
    for (int v:adj[u])
    {
        if (!vis[v])
        return dfs(v) + 1;
    }
    return 1;
}
 
void solve() 
{
    int n;
    cin>>n;
    for (int j=0; j<n; j++)
    {
        vis[j] = false;
        adj[j].clear();
    }
    bool wrong = false;
    for (int i=0; i<n; i++)
    {
        int a;
        int b;
        cin>>a>>b;
        a--;
        b--;
        adj[a].push_back(b);
        adj[b].push_back(a);
        if (a==b || adj[a].size()>2 || adj[b].size()>2)
        {
        wrong = true;
        }
    }
    for (int i=0; i<n; i++)
    {
        if (vis[i])
        continue;
        int c = 0;
        c = dfs(i);
        cout<<i<<" "<<c<<endl;
        if (c%2!=0)
        wrong = true;
    }
    if (wrong)
    cout<<"NO\n";
    else 
    cout<<"YES\n";
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
