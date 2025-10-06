#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n,a,b,c;
    cin >> n>>a>>b>>c;
    ll x=min(a,n);
    ll y=min(n,b);
    ll z=min(2*n-x-y,c);
    cout<<x+y+z<<endl;
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