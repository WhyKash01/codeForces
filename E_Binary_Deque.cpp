#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    ll Max=0, a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        Max+=x;
        a[i]=Max;
    }
    if(Max<k){
        cout<<-1<<endl;
    }
    else if(k==Max){
        cout<<0<<endl;
    }
    else{
        ll ans=1e9;
        for (int i = 0; i < n+1; i++)
        {
            if(k+a[i]>Max){
                break;
            }
            else{
                ll f=k+a[i];
                ll l=0,r=n;
                while(r-l>1){
                    ll mid=(l+r)/2;
                    if(a[mid]>f){
                        r=mid;
                    }
                    else{
                        l=mid;
                    }
                }
                if(a[r]!=f){
                    r=l;
                }
                if(a[r]==f||a[l]==f){
                ans=min(ans,(n-r)+i);
                }
                // cout<<l<<" "<<r<<endl;
            }
        }
        cout<<ans<<endl;
        
    }
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