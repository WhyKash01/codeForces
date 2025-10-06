#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        ll x=min(a[i],a[i+1]);
        a[i]-=x;
        a[i+1]-=x; 
    }
    ll ans=true;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>a[i+1]){
            ans=false;
        }
    }
    ans?cout<<"YES\n":cout<<"NO\n";
    return;
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}