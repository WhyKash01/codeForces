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
    ll ans=0;
    ll sum=0,sum1=0,cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            sum+=a[i];
        }
        else{
            sum1+=a[i];
        }
        ans=max(ans+a[i],abs(sum-abs(sum1)));
        // cout<<ans<<" ";
    }
    // cout<<endl;
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