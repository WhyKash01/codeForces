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
    int n;
    cin >> n;
    int a[n], b[n];
    set<int, greater<int>> s1, s2, s3;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
        if (a[i] == 0)
        {
            s1.insert(i);
        }
        else if (a[i] == 1)
        {
            s2.insert(i);
        }
        else
        {
            s3.insert(i);
        }
    }
    sort(b, b + n);
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            if (b[i] == 0)
            {
                if (a[i] == 1)
                {
                    s2.erase(i);
                    int x = *s1.begin();
                    s2.insert(x);
                    swap(a[i], a[x]);
                    s1.erase(x);
                    v.push_back({i + 1, x + 1});
                }
                else
                {
                    int x = *s2.begin();
                    s2.erase(x);
                    s3.erase(i);
                    s3.insert(x);
                    swap(a[i], a[x]);
                    v.push_back({i + 1, x + 1});
                    x = *s1.begin();
                    s2.insert(x);
                    swap(a[i], a[x]);
                    s1.erase(x);
                    v.push_back({i + 1, x + 1});
                }
            }
            else if (b[i] == 1)
            {
                int x = *s2.begin();
                swap(a[i], a[x]);
                s2.erase(x);
                s3.erase(i);
                s3.insert(x);
                v.push_back({i + 1, x + 1});
            }
        }
        else
        {
            if (b[i] == 0)
            {
                s1.erase(i);
            }
            else if (b[i] == 1)
            {
                s2.erase(i);
            }
            else
            {
                s3.erase(i);
            }
        }
    }
    cout << v.size() << endl;
    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
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
