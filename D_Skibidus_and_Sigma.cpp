#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
bool issorted(ll a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    set<ll> s;
    map<ll, set<pair<ll, ll>>> mp;
    for (int i = 0; i < n; i++)
    {
        ll sum = 0, sum1 = 0;
        for (int j = 0; j < m; j++)
        {
            sum1 += a[i][j];
            sum += sum + a[i][j];
        }
        mp[sum1].insert({sum, i});
        s.insert(sum1);
    }
    ll sum = 0;
    vector<ll> v;
    for (auto i = s.rbegin(); i != s.rend(); i++)
    {

        for (auto k = mp[*i].rbegin(); k != mp[*i].rend(); k++)
        {
            for (int j = 0; j < m; j++)
            {
                sum += a[(*k).second][j];
                v.push_back(sum);
            }
        }
    }
    ll ans = 0;
    for (int i = 0; i < v.size(); i++)
    {
        ans += v[i];
    }
    cout << ans << endl;
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