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
int n, k, x;
const int N = 1e5 + 69;
int dp[N];
int dp2[N];
vector <int> adj[N];
 
void dfs(int u, int par = -1){
    dp2[u] = 1;
    dp[u] = 0;
    
    for (int v : adj[u]){
        if (v != par){
            dfs(v, u);
            dp[u] += dp[v];
            dp2[u] += dp2[v];
        }
    }
    
    if (dp2[u] >= x){
        dp2[u] = 0;
        dp[u]++;
    }
}
 
bool check(int xx){
    x = xx;
    dfs(1);
    
    if (dp[1] >= k + 1) return true;
    else return false;
}
 
void solve() 
{
    cin >> n >> k;
    
    for (int i = 1; i <= n; i++){
        adj[i].clear();
    }
    
    for (int i = 1; i < n; i++){
        int u, v; cin >> u >> v;
        
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    
    int l = 1, r = n;
    while (l != r){
        int mid = (l + r + 1) / 2;
        
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    
    cout << l << "\n";
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
