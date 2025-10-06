
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        ll low = 0, high = a;
        while (high - low > 1)
        {
            ll mid = (high + low) / 2;
            if (mid * (mid + 1) / 2 > a)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        ll al = high;
        ll c = b + a;
        low = al, high = c;
        while (high - low > 1)
        {
            ll mid = (high + low) / 2;
            if (mid * (mid + 1) / 2 > c)
            {
                high = mid;
            }
            else
            {
                low = mid;
            }
        }
        ll ans = low;
        if (high * (high + 1) / 2 <= c)
        {
            ans = high;
        }
        cout << ans << endl;
    }
    return 0;
}