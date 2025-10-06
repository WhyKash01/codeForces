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
    int n, m;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    multiset<int> s[m];
    for (int i = 0; i < n; i++)
    {
        s[a[i] % m].insert(a[i]);
    }
    int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int x = 0;
        if (i != 0)
        {
            x = m - i;
        }
        while (!s[i].empty())
        {
            int p = *s[i].begin();
            s[i].erase(s[i].begin());
            if (s[x].empty())
            {

                bool f = false;
                for (int j = x + 1; j < m; j++)
                {
                    if (!s[j].empty())
                    {
                        ans += (p + *s[j].begin()) / m;
                        s[j].erase(s[j].begin());
                        f = true;
                        break;
                    }
                }
                if (!f)
                {

                    for (int j = i; j < x; j++)
                    {
                        if (!s[j].empty())
                        {
                            ans += (p + *s[j].begin()) / m;
                            s[j].erase(s[j].begin());
                            f = true;
                            break;
                        }
                    }
                }
            }
            else
            {
                int q = *s[x].begin();
                s[x].erase(s[x].begin());
                ans += (p + q) / m;
            }
        }
    }
    cout << ans << endl;
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
