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
        ll n, x, y;
        cin >> n >> x >> y;
        vector<ll> arr(n);
        for (ll i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
        sort(arr.begin(), arr.end());
        ll sum = accumulate(arr.begin(), arr.end(), 0LL);
        x = sum - x;
        y = sum - y;
        y = max(y, 2LL);
        x = min(x, 2000000000LL);
    
        ll count = 0;
        for (ll i = 0; i < n - 1; i++) {
            ll nx = x - arr[i]; 
            ll ny = y - arr[i]; 
            ll small = lower_bound(arr.begin() + i + 1, arr.end(), ny) - arr.begin();
            ll big = upper_bound(arr.begin() + i + 1, arr.end(), nx) - arr.begin() - 1;
 
            if (small <= big && small < n && big >= i + 1) {
                count += (big - small + 1);
            }
        }
        cout << count << endl;
    }
}