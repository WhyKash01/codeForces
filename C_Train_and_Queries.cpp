#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll> a(n + 1);
        map<ll, ll> las, fir;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            if (!fir[a[i]])
                fir[a[i]] = i;
            las[a[i]] = i;
        }
        while (k--)
        {
            ll l, r;
            cin >> l >> r;
            if (fir[l] && fir[r] && fir[l] < las[r])
            {
                cout << "YES\n";
            }
            else
                cout << "NO\n";
        }
    }
}
