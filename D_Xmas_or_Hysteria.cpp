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
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end());
    if (k <= n / 2)
    {
        if (k == 0)
        {
            bool f = false;
            vector<pair<int, int>> ans;
            int l = 0, h = n - 1;
            int curr = v[h].first;
            int z = h - 1;
            for (int i = h - 1; i >= 0; i--)
            {
                if (v[i].first >= curr)
                {
                    z = i;
                    f = true;
                    break;
                }
                else
                {
                    curr -= v[i].first;
                    ans.push_back({v[i].second, v[h].second});
                }
            }
            if (f)
            {
                for (int i = 0; i < z; i++)
                {
                    ans.push_back({v[i].second, v[i + 1].second});
                }
                ans.push_back({v[z].second, v[h].second});
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
        else
        {
            vector<pair<int, int>> ans;
            int l = 0, h = n - 1;
            while (k > 1)
            {
                ans.push_back({v[h].second, v[l].second});
                l++;
                h--;
                k--;
            }
            for (int i = l; i < h; i++)
            {
                ans.push_back({v[i+1].second, v[i].second});
            }
            cout << ans.size() << endl;
            for (int i = 0; i < ans.size(); i++)
            {
                cout << ans[i].first << " " << ans[i].second << endl;
            }
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