#include <bits/stdc++.h>
using namespace std;

#define int long long
#define MOD 998244353ll

int pow_mod(int a, int b, int m)
{
    a %= m;
    b %= m;

    int res = 1;

    while (b > 0)
    {
        if (b & 1)
            res = (res * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }

    return res;
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int tc = 1;

    while (tc--)
    {
        int n;
        cin >> n;

        int a[n];
        for (auto &e : a)
            cin >> e;
        
        int dp[n+1];
        fill(dp, dp+n+1, 0);

        for (int i = 1; i <= n; ++i)
            for (int k = 1; i*k <= n; ++k)
                dp[i] = max(dp[i], a[i*k-1]);
        
        sort(dp+1, dp+n+1, [](auto a, auto b) { return a > b; });
        
        int ans = 0;

        for (int i = 1; i <= n; ++i)
            ans = ((ans % MOD) + (dp[i] * pow_mod(2, n-i, MOD) % MOD)) % MOD;

        cout << ans << '\n';



    }
}