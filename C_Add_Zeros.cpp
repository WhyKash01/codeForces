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
int M = 1000000007;
void solve()
{
    int n; cin >> n;
    vector <int> a(n + 1);
    map <int, vector <int>> mp;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        int sz = a[i] + i - 1;
        if (i >= 2){
            mp[sz].push_back(sz + i - 1);
        }
    }
    queue <int> q;
    set <int> vis;
    vis.insert(n);
    q.push(n);
    int ans = n;
    while (!q.empty()){
        int u = q.front(); q.pop();
        ans = max(ans, u);
        for (int v : mp[u]){
            if (vis.find(v) == vis.end()){
                vis.insert(v);
                q.push(v);
            }
        }
    }
    cout << ans << "\n";
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