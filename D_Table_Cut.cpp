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
int M = 998244353;

void solve()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    int v[n];
    int tot = 0;
    for (int i = 0; i < n; i++)
    {
        int curr = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            curr += a[i][j];
        }
        v[i] = curr;
        tot += curr;
    }
    int x = tot;
    tot /= 2;
    int curr = 0;
    string s;
    bool p = false;
    for (int i = 0; i < n; i++)
    {
        if (p)
        {
            s.push_back('D');
        }
        else if (curr + v[i] < tot)
        {
            s.push_back('D');
            curr += v[i];
        }
        else
        {
            int q = 0;
            int req = curr + v[i] - tot;
            bool f = false;
            for (int j = 0; j < m; j++)
            {
                if (f == true)
                {
                    s.push_back('R');
                }
                else if (a[i][j] == 0)
                {
                    s.push_back('R');
                }
                else if (req > 0)
                {
                    s.push_back('R');
                    req--;
                }
                else
                {
                    s.push_back('D');
                    s.push_back('R');
                    f = true;
                }
            }
            p = true;
        }
    }
    if(s.size()<n+m){
        s.push_back('D');
    }
    cout << (x - tot) * tot << endl;
    cout << s << endl;
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
