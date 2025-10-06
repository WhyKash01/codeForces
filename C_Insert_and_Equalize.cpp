#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n==1){
        cout<<1<<endl;
    }
    else{

    ll g=0;
    for (int i = 0; i < n-1; i++)
    {
        if(i==0){
            g=a[i+1]-a[i];
        }
        else{
            g=__gcd(g,a[i+1]-a[i]);
        }
    }
    ll it=1;
    for (int i = n-1; i >= 1; i--)
    {
        if(a[i]-a[i-1]==g){
            it++;
        }
        else{
            break;
        }
    }
    ll ans=min(n,it);
    for (int i = 0; i < n; i++)
    {
        ans+=(a[n-1]-a[i])/g;
    }
    cout<<ans<<endl;
    }

    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin>>tc;
    while (tc--)
        solve();
    return 0;
}