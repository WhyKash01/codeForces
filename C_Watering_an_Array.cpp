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
void solve()
{
    int n, k, s;
    cin >> n >> k >> s;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
 
    vector<int> b(k);
    for (int i = 0; i < k; i++) cin >> b[i];
 
    int ans = 0;
    for (int i = 0; i < s && i <= 2 * n; i++)
    {
        int cur = 0;
        for (int j = 0; j < n; j++)
        {
            cur += (a[j] == j + 1);
        }
        cur += (s - i - 1) / 2;
        if (cur > ans)
        {
            ans = cur;
        }
        for (int j = 0; j < b[i % k]; j++)
        {
            a[j]++;
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