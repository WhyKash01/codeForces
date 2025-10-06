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
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<pair<int, int>> v;
    map<pii, int> p;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
        p[{a[i], b[i]}] = i + 1;
    }
    vector<pair<int, int>> ans;
    bool f = true;
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!p[{v[i].second, v[i].first}])
        {
            f = false;
        }
        if (v[i].first == v[i].second)
        {
            s.insert(v[i].first);
        }
    }
    if (f && s.size()<=1)
    {
        for (int i = 0; i < n / 2; i++)
        {
            if (p[{v[i].second, v[i].first}] != n - i && v[i].first != v[i].second)
            {
                
                ans.push_back({p[{v[i].second, v[i].first}], n - i});
                int q=p[{v[i].second, v[i].first}]-1;
                p[v[n - i - 1]] = p[{v[i].second, v[i].first}];
                p[{v[i].second, v[i].first}] = n - i;
                swap(v[q] , v[n - i - 1]);
            }
            else if (v[i].first == v[i].second)
            {
                if (s.size() == 1)
                {
                    if (p[v[i]] != n / 2 + 1)
                    {
                        ans.push_back({i + 1, n / 2 + 1});
                        p[v[i]] = n / 2 + 1;
                        p[v[n / 2]] = i+1;
                        swap(v[i], v[n / 2]);
                    }
                }
                
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else
    {
        cout << -1 << endl;
    }
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
