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
    int n;
    cin >> n;
    int a[n + 1], b[n], c[n];
    a[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
        b[i] = c[i];
    }
    map<int, int> m;
    sort(b, b + n);
    for (int i = 0; i < n; i++)
    {
        a[i + 1] = b[i] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (!m[b[i]])
        {
            int ans = 1;
            int x = 0;
            if (i != n - 1)
            {
                x = a[n] - a[i + 1];
                x -= (n - i - 1) * (b[i] - 1);
            }
            ans += x;
            x=0;
            if (i != 0)
            {
                x = b[i] * i;
                x += i;
                x -= a[i];
            }
            ans+=x;
            m[b[i]] = ans;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << m[c[i]] << " ";
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