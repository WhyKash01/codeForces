#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
int M = 998244353;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0;
    multiset<pair<int, int>, greater<pair<int, int>>> s;
    for (int i = n - 1; i >= 0; i--)
    {
        s.insert({a[i], 0});
        if (s.begin()->second == 0)
        {
            ans += s.begin()->first;
            int x = s.begin()->first;
            auto z = s.begin();
            s.erase(z);
            s.insert({x, 1});
        }
        else
        {
            ans += s.begin()->first;
            auto z = s.begin();
            s.erase(z);
        }
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
}
