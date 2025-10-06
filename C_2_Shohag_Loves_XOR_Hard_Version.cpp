
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
        ll x = 1, cnt = 0;
        while (x <= b)
        {
            x = x << 1;
            cnt++;
        }
        ll q=1;
        while (q <= a)
        {
            q = q << 1;
            cnt++;
        }
        x = x >> 1;
        ll y = x << 1;
        y--;
        ll k=y-y%a;
        ll ans = k/a;
        for (int i = x; i <= min(q, b); i++)
        {
            if (i == a)
            {
                continue;
            }
            ll z = i ^ a;
            if (z % a == 0 || z % i == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}