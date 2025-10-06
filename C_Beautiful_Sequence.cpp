#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int ans = 0, cnt = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            one = (one + 1) % mod;
        }
        else if (a[i] == 2)
        {
            cnt = ((cnt + cnt) % mod + one) % mod;
        }
        else
        {
            ans = (ans + cnt) % mod;
        }
    }
    cout << ans << "\n";
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}