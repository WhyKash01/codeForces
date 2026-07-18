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
int MOD = 1e9 + 7;

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<string> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    vector<vector<int>> vis(n, vector<int>(m, 0));
    bool ans = false;
    queue<pair<pair<int, int>, int>> q;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == 'A')
            {
                vis[i][j] = 1;
                q.push({{i, j}, 1});
            }
        }
    }
    int x2 = -1, y2 = -1, v = 0;
    while (!q.empty())
    {
        auto x = q.front();
        q.pop();
        int i = x.first.first;
        int j = x.first.second;
        int val = x.second;
        if (a[i][j] == 'B')
        {
            x2 = i, y2 = j, v = val;
            ans = true;
            break;
        }
        pair<int, int> p[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
        for (int k = 0; k < 4; k++)
        {
            int x1 = i + p[k].first;
            int y1 = j + p[k].second;
            if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m)
            {
                if (vis[x1][y1] == 0 && a[x1][y1] != '#')
                {
                    vis[x1][y1]=val+1;
                    q.push({{x1, y1}, val + 1});
                }
            }
        }
    }

    if (ans)
    {
        while (v > 1)
        {
            pair<int, int> p[4] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
            char d[4] = {'L', 'U', 'R', 'D'};
            for (int k = 0; k < 4; k++)
            {
                int x1 = x2 + p[k].first;
                int y1 = y2 + p[k].second;
                if (x1 >= 0 && x1 < n && y1 >= 0 && y1 < m)
                {
                    if ((a[x1][y1] == '.'||a[x1][y1]=='A') && vis[x1][y1] == v - 1)
                    {
                        s.push_back(d[k]);
                        x2=x1,y2=y1;
                        break;
                    }
                }
            }
            v--;
        }
        reverse(s.begin(), s.end());
        cout << "YES" << endl;
        cout << s.size() << endl;
        cout << s << endl;
    }
    else
    {
        cout << "NO\n";
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