#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        a[i]-=b[i+1];
    }
    
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            ans+=a[i];
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