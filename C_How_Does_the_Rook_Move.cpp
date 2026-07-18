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
const int MAX = 3 * 1e5 + 20;
int fact[MAX + 1];
int power(int base, int exp)
{
    int res = 1;
    base %= MOD;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % MOD;
        base = (base * base) % MOD;
        exp /= 2;
    }
    return res;
}

int modInverse(int n)
{
    return power(n, MOD - 2);
}

void preComputeFactorials()
{
    fact[0] = 1;
    for (int i = 1; i <= MAX; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

int nCr(int n, int r)
{
    if (r < 0 || r > n)
        return 0;
    return (fact[n] * modInverse((fact[r] * fact[n - r]) % MOD)) % MOD;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    int z = 0;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == y)
        {
            z++;
        }
        else
        {
            z += 2;
        }
    }
    map<int, int> m;
    m[0] = 1;
    for (int i = 2; i <= n - z; i += 2)
    {
        int x = ((i - 1) * 2) % MOD;
        x = (x * m[i - 2]) % MOD;
        m[i] = x;
    }
    if ((n - z) % 2 == 0)
    {
        int ans = 0;
        int l = n - z;
        for (int i = 0; i <= (n - z); i += 2)
        {
            int z = l - i;
            int x = (nCr(l, i) * m[z]) % MOD;
            ans = (ans + x) % MOD;
        }
        cout << ans << endl;
    }
    else
    {
        int ans = 0;
        int l = n - z;
        for (int i = 1; i <= l; i += 2)
        {
            int z = l - i;
            int x = (nCr(l, i) * m[z]) % MOD;
            ans = (ans + x) % MOD;
        }
        cout << ans << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    preComputeFactorials();
    while (t--)
    {
        solve();
    }
}
