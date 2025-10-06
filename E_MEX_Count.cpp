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
    int a[n];
    map<int, int> m1, m2;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        m1[a[i]]++;
    }
    sort(a, a + n);
    int x = 0;
    int e = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > x)
        {
            break;
        }
        if (a[i] == x)
        {
            e++;
            m2[m1[a[i]]]++;
            x++;
        }
    }
    int ans = 1;
    cout << 1 << " ";
    for (int i = 1; i < e; i++)
    {
        cout << ans + m2[i] << " ";
        ans += m2[i];
    }
    for (int i = n - e; i > 0; i--)
    {
        cout << i << " ";
    }
    cout << endl;
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
