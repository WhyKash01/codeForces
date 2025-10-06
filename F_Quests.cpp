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
    int n, c, d;
    cin >> n >> c >> d;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.pb(x);
    }
    int pref[d + 1];
    pref[0] = 0;
    sort(v.begin(), v.end());
    int x = n - 1;
    for (int i = 1; i <= d; i++)
    {
        if (x >= 0)
        {
            pref[i] = v[x] + pref[i - 1];
        }
        else
        {
            pref[i] = pref[i - 1];
        }
        x--;
    }
    if (pref[d] >= c)
    {
        cout << "Infinity\n";
    }
    else if (pref[1] * d < c)
    {
        cout << "Impossible\n";
    }
    else
    {
        for (int i = d - 1; i >= 1; i--)
        {
            int x = d % i;
            int ans = pref[i] * (d / i);
            ans += pref[x];
            if (ans >= c)
            {
                cout << i - 1 << endl;
                break;
            }
        }
    }
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
