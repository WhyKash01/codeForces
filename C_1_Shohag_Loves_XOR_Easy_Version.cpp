
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
        while (x <= a)
        {
            x = x << 1;
            cnt++;
        }
        x = x >> 1;
        ll y = x << 1;
        ll ans = 0;
        for (int i = x; i <= min(y, b); i++)
        {
            if (i == a)
            {
                continue;
            }
            ll z = i ^ a;
            if (a % z == 0 || i % z == 0)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}