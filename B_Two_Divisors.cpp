#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if (a > b)
        {
            swap(a, b);
        }
        int ans = LCM(a, b);
        if (a == 1)
        {
            cout << b * b << endl;
        }
        else if (ans == b)
        {
            int x = ans * (b / a);
            cout << x << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}