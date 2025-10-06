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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll a[n];
        ll major = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            major += a[i];
        }
        ll x[k], y[k];
        ll sum = 0;
        sort(a, a + n);
        for (int i = 0; i < 2 * k; i++)
        {
            sum += a[i];
            if (i % 2 == 1)
            {
                x[i / 2] = sum;
            }
        }
        sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += a[n - i - 1];
            y[i] = sum;
        }

        sum = 1000000000000000000;
        for (int i = 0; i < k - 1; i++)
        {
            sum = min(sum, 1ll * (x[i] + y[k - 2 - i]));
        }
        ll q = min(1ll * x[k - 1], 1ll * y[k - 1]);
        sum = min(sum, q);
        cout << major - sum << endl;
    }
}
