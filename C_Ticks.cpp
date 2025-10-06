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
int M = 998244353;

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    for (int i = n - 1; i >= k; i--)
    {
        for (int j = k; j < m - k; j++)
        {
            if (s[i][j] != '.')
            {
                vector<pii> v;
                v.push_back({i, j});
                int x = 1;
                while (i - x >= 0 && j - x >= 0 && j + x <= m - 1)
                {
                    if (s[i - x][j - x] != '.' && s[i - x][j + x] != '.')
                    {
                        v.push_back({i - x, j - x});
                        v.push_back({i - x, j + x});
                        x++;
                    }
                    else
                    {
                        break;
                    }
                }
                if (x > k)
                {
                    for (int i = 0; i < v.size(); i++)
                    {
                        s[v[i].first][v[i].second] = '+';
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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
