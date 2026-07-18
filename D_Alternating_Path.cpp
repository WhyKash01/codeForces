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
int Calculate(int n, vector<vector<int>>& adj) {
    vector<int> c(n, -1);
    int ans = 0;

    for (int i = 0; i < n; i++) {
        if (c[i] == -1) {
            queue<int> q;
            q.push(i);
            c[i] = 0;
            
            int len1 = 0, len2 = 0;
            bool f = true;

            while (!q.empty()) {
                int u = q.front();
                q.pop();
                
                if (c[u] == 0) len1++;
                else len2++;

                for (int v : adj[u]) {
                    if (c[v] == -1) {
                        c[v] = 1 - c[u];
                        q.push(v);
                    } else if (c[v] == c[u]) {
                        f = false;
                    }
                }
            }

            if (f) {
                ans += max(len1, len2);
            }
        }
    }
    return ans;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<vector<int>>adj(n);
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int ans=Calculate(n,adj);
    cout<<ans<<endl;
    
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