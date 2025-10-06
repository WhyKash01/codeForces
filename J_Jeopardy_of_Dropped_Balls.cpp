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
    int n, m;
    cin >> n >> m;
    int k;
    cin >> k;
    vector<vector<int>> vec(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> vec[i][j];
        }
    }
    vector<int> ans(m, 0);

    while (k--)
    {
        int c;
        cin >> c;

        int i = 0, j = c - 1;
        int change = 0;
        if (ans[j] != 0)
        {
            cout << ans[j] << " ";
        }
        while (i < n)
        {

            if (vec[i][j] == 1)
            {
                vec[i][j] = 2;
                j++;
                change = 1;
            }

            else if (vec[i][j] == 2)
            {
                vec[i][j] = 2;
                i++;
                change = 1;
            }
            else
            {
                vec[i][j] = 2;
                j--;
            }
        }
        if (change == 0)
        {
            ans[c - 1] = j + 1;
        }
        cout << j + 1 << " ";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
