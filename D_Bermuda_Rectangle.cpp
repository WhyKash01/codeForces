#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) * ((b) / std::__gcd(a, b)))
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

int MOD = 1e9 + 7;
int inf = LLONG_MAX;
vector<int> getFactors(int S)
{
    vector<int> factors;
    if (S == 0)
    {
        return factors;
    }

    for (int i = 1; i * i <= S; ++i)
    {
        if (S % i == 0)
        {
            factors.push_back(i);
            if (i != S / i)
            {
                factors.push_back(S / i);
            }
        }
    }
    sort(factors.begin(), factors.end());
    return factors;
}
int getArea(int X, int S, const vector<int>& v, const vector<int>& pref)
{
    if (X == 0) return 0;
    int i = lower_bound(v.begin(), v.end(), X) - v.begin();
    int p1 = (i == 0) ? 0 : v[i - 1];
    int p2 = (i == 0) ? 0 : pref[i - 1];
    return p2 + (X - p1) * (S / v[i]);
}
void solve()
{
    int S, n;
    cin >> S >> n;
    vector<int> v = getFactors(S);
    int k = v.size();
    vector<int> pref(k);
    pref[0] = v[0] * (S / v[0]);
    for (int i = 1; i < k; ++i)
    {
        pref[i] = pref[i - 1] + (v[i] - v[i - 1]) * (S / v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;

        int max_d = S / y;
        int idx = upper_bound(v.begin(), v.end(), max_d) - v.begin() - 1;
        int D = (idx >= 0) ? v[idx] : 0;
        int z = min(x, D);
        int ans = y * z + getArea(x, S, v, pref) - getArea(z, S, v, pref);
        
        cout << ans << "\n";
    }
}

signed main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}