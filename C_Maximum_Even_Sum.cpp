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
    int a, b;
    cin >> a >> b;
    if (a % 2 == 1 && b % 2 == 1)
    {
        cout << a * b + 1 << endl;
    }
    else if (a % 2 == 0 && b % 2 == 0)
    {
        cout << a * (b / 2) + 2 << endl;
    }
    else
    {
        if (a % 2 == 0)
        {
            cout << -1 << endl;
        }
        else if (b % 4 == 0)
        {
            cout << a * (b / 2) + 2 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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
