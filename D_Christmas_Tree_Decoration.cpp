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
int MOD = 998244353;
const int MAX = 55;
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
    int n;
    cin >> n;
    int a[n + 1];
    int Max = 0;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        cin >> a[i];
        if (i != 0)
        {
            Max = max(Max, a[i]);
        }
        sum += a[i];
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (Max == a[i])
        {
            cnt++;
        }
    }
    int z = n * (Max - 1) + cnt;
    if (sum < z)
    {
        cout << 0 << endl;
    }
    else
    {
        if(sum/n!=Max-1){
            cnt=0;
        }
        int x = sum % n;
        x -= cnt;
        int ans = 1;
        int p = n - cnt;
        ans = (ans *nCr(p, x)) % MOD;
        int e = sum % n, r = n - e;
        ans = (ans * fact[e]) % MOD;
        ans = (ans * fact[r]) % MOD;
        cout<<ans<<endl;
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
