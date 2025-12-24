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
const int N = 1e5 + 5, M = 2 * N + 5;
bool vis[N], ans;
void Sieve()
{
    memset(vis, true, sizeof(vis));
    vis[0] = vis[1] = false;
    for (int i = 4; i < N; i += 2)
        vis[i] = false;
    for (int i = 3; i < N / i; i += 2)
    {
        if (!vis[i])
            continue;
        for (int j = i * i; j < N; j += i + i)
            vis[j] = false;
    }
}
vector<int> primes;
void gen()
{
    for (int i = 2; i < N; ++i)
        if (vis[i])
            primes.emplace_back(i);
}
int in[N], z = 0;
bool check(int x)
{
    if (in[x] == z)
    {
        return true;
    }
    in[x] = z;
    return false;
}
set<int> st;
bool fact(int x)
{

    if (x < N && vis[x] == true)
    {
        if (check(x))
        {
            return true;
        }
        return false;
    }

    int idx = 0, sz = primes.size();

    while (x > 1 && idx < sz && x / primes[idx] >= primes[idx])
    {

        if (x % primes[idx] == 0)
        {
            if (check(primes[idx]))
            {
                return true;
            }
            while (x % primes[idx] == 0)
                x /= primes[idx];
        }
        ++idx;
    }

    if (x > 1)
    {
        if (x < N)
        {
            if (check(x))
            {
                return true;
            }
            return false;
        }

        if (st.find(x) != st.end())
        {
            return true;
        }
        st.emplace(x);
    }
    return false;
}
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (auto x : a)
    {
        if (fact(x))
        {
            ans = true;
            break;
        }
    }
    (ans) ? cout << "YES\n" : cout << "NO\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    Sieve();
    gen();
    cin >> t;
    while (t--)
    {
        ans = false;
        z++;
        st.clear();
        solve();
    }
}
