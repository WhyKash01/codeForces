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
        int n;
        cin >> n;
        ll sum = 0;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        bool x = true;
        for (int i = 0; i < n; i++)
        {
            sum += a[i];
            if (!(sum >= (i * (i + 1) / 2) && x))
            {
                x=false;
            }
        }

        if (a[0] == a[1] && !a[0])
        {
            x = false;
        }
        if (x)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}