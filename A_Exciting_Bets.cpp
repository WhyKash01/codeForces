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
        ll x, y;
        cin >> x >> y;
        if (x == y)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            if (y < x)
            {
                swap(x, y);
            }
            ll diff = y - x;
            ll count = 0;
            if ((x % diff) != 0)
            {
                count = min(((x / diff) + 1) * diff - x,x-((x / diff) ) * diff );
            }
            cout << diff << " " << count << endl;
        }
    }
}