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
ll calc(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = a.size() - 1; i >= 0; --i) {
        if(a[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n;i++) cin >> a[i];
        ll ans = calc(a);
        for(int i=0; i<n;i++) {
        if(a[i] == 0) {
            a[i] = 1;
            ans = max(ans, calc(a));
            a[i] = 0;
            break;
        }
    }
    for(int i = n - 1; i >= 0; --i) {
        if(a[i] == 1) {
            a[i] = 0;
            ans = max(ans, calc(a));
            a[i] = 1;
            break;
        }
    }
    cout << ans << "\n";
    }
}