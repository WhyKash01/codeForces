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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n, [](int a, int b)
         { return a > b; });
    int x = n - 1, y = n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > i-1)
        {
            v.push_back(a[i]);
            if (i == n - 1)
            {
                x = n;
            }
        }
        else
        {
            v.push_back(i-1);
            y = i;
            x = i-1;
            break;
        }
    }
    while (y < n)
    {
        int z = y + a[y];
        if (z - x >= x - 1)
        {
            v.push_back(z - x);
            x++;
            y++;
        }
        else
        {
            v.push_back(x - 1);
            x--;
        }
    }
    for (int i = x - 1; i >= 0; i--)
    {
        v.push_back(i);
    }
    int sum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
        cout << sum << " ";
    }
    cout << endl;
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
