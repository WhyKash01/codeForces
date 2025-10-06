#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll x=1;
    ll cnt=0;
    while (x<=n)
    {
        x*=4;
        cnt++;
    }
    ll ans=1;
    for (int i = 0; i < cnt-1; i++)
    {
        ans*=2;
    }
    
    cout<<ans<<endl;
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