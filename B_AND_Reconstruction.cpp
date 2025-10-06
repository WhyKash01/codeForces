#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
bool comp(int a, int b)
{
    return a > b;
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
        int n;
        cin >> n;
        int b[n+1],a[n+1];
        for (int i = 1; i < n; i++){
            cin >> b[i];
        }
        b[0] = b[n] = 0;
        for (int i = 1; i <= n; i++){
            a[i] = b[i - 1] | b[i];
        }
        bool z = true;
        for (int i = 1; i < n; i++){
            if ((a[i] & a[i + 1]) != b[i]) {
                z = false;
                break;
            }
        }
        if (z) {
            for (int i = 1; i <= n; i++)
                cout << a[i] << ' ';
            cout << endl;
        } else
            cout << -1 << endl;
    }
}