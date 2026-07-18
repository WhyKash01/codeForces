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
int M = 1e9+7;

void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> a(n, vector<int>(n, 0));
    vector<string> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    if(v[0][0]!='*'){
        a[0][0] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (v[i][j] == '*')
            {
                continue;
            }
            if (i > 0)
            {
                if (v[i - 1][j] != '*')
                {
                    a[i][j] =(a[i][j]+ a[i - 1][j])%M;
                }
            }
            if (j > 0)
            {
                if (v[i][j - 1] != '*')
                {
                    a[i][j] =(a[i][j] + a[i][j - 1])%M;
                }
            }
        }
    }
    cout << a[n - 1][n - 1]%M << endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}