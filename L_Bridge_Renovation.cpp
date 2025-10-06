#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll ans=0;
    ans+=n*2/3;
    n+=(2*n)%3;
    if(n%2==0){
        ans+=n/2;
    }
    else{
        ans+=n/2+1;
    }
    cout<<ans<<endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}