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
int M = 998244353;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> a(n);
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    int l = -1;
    int r = 1e9;
    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        int x = 0;
        int y = 0;
        for (int i = 0; i < n; i++)
        {
            x = max(a[i].first, x - mid);
            y = min(a[i].second, y + mid);
            
            if (x > y)
            {
                break;
            }
        }
        if (x > y)
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
            ans = mid;
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
