#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll l, r;
    cin >> l >> r;
    ll ans = 0;
    ll x = sqrtl(l);
    x++;
    ll y = sqrtl(r);
    y--;
    if (x <= y)
    {
        ans += (y - x + 1) * 3;
    }
    if(x-1==y+1){
        ll z=l-(l%(x-1));
        ans+=(r-z)/(x-1);
        if(z==l){
            ans++;
        }
    }
    else{
        ll a = (x * x - l - 1) / (x - 1) + 1;
        ans += a;
        y++;
        ll b = (r - (y * y)) / (y) + 1;
        ans += b;
    }
    cout << ans << endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}