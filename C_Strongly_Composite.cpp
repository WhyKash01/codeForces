#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll N = 1e7;
vector<ll> v;
void solve()
{
    int n;
    cin >> n;
    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        for (int j = 2; j * j <= x; j++)
        {
            while (x % j == 0)
            {
                x /= j;
                m[j]++;
            }
        }
        if (x != 1)
        {
            m[x]++;
        }
    }
    int res = 0, rem = 0;
    for (pair<int, int> p : m)
    {
        int num = p.first;
        int cnt = p.second;
        res += cnt / 2;
        rem += cnt % 2;
    }

    res += rem / 3;
    cout << res << endl;
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