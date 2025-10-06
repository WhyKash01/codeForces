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
    int n, m;
        cin >> n >> m;
 
        int a[n];
        for (auto &e : a)
            cin >> e;
 
        map<int, int> app;
        map<int, int> cnt;
 
        for (auto e : a)
            app[e] = 0;
 
        for (int i = 1; i <= m; ++i)
        {
            int p, v;
            cin >> p >> v;
 
            cnt[a[p-1]] += i - app[a[p-1]];
            app.erase(a[p-1]);
 
            app[v] = i;
            a[p-1] = v;
        }
 
        for (auto [v, i] : app)
            cnt[v] += m + 1 - i;

        int ans = 0;
        for (auto [v, c] : cnt)
            ans += m*(m+1)/2 - ((m-c)*(m-c+1)/2);
        
        cout << ans << '\n';
    

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
