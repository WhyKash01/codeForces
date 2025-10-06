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

const int N = 40004, M = 502;
const long long MOD = 1000000007;
long long dp[N][M];
int reverse(int n)
{
    int r = 0;
    while (n > 0)
    {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

bool palindrome(int n)
{
    return (reverse(n) == n);
}
void solve()
{
    int n;
    cin >> n;
    cout << dp[n][M - 1] << '\n';
}

signed main()
{
    vector<int> palin;
    palin.push_back(0);
    for (int i = 1; i < 2 * N; i++)
    {
        if (palindrome(i))
            palin.push_back(i);
    }
    for (int j = 1; j < M; j++)
        dp[0][j] = 1;
    for (int i = 1; i < N; i++)
    {
        dp[i][0] = 0;
        for (int j = 1; j < M; j++)
        {
            if (palin[j] <= i)
                dp[i][j] = (dp[i][j - 1] + dp[i - palin[j]][j]) % MOD;
            else
                dp[i][j] = dp[i][j - 1];
        }
    }
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
