#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll ans=n*(n+1)/2,curr=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>curr){
            curr++;
        }
        else{
            ll x=n-i;
            ll diff=curr-a[i]+1;
            ans-=diff*x;
            curr-=diff;
            curr++;
        }
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