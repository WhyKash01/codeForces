#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll s = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        s += a[i];
    }
    sort(a.begin(), a.end());
    if (n < 3)
    {
        cout << "-1" << endl;
        return;
    }
    cout << max(0LL, a[n / 2] * 2 * n - s + 1) << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
