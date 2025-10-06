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
    else if(n%2==0){
        ll Max=0;
        for (int i = 0; i < n; i+=2)
        {
            Max=max(Max,a[i+1]-a[i]);
        }
        cout<<Max<<endl;
    }
    else{
        ll ans=LLONG_MAX;
        for (int i = 0; i < n; i+=2)
        {
            ll j=0,Max=0;
            bool f=true;
            while(j<n){
                if(j==i&&a[j+1]-a[j]==1){
                    if(i!=0){
                        f=false;
                        break;
                    }
                    else if(i==0&&a[0]==0){
                        f=false;
                        break;
                    }
                    else{
                        j++;
                    }
                }
                else if(i==j){
                    j++;
                }
                else{
                    Max=max(Max,a[j+1]-a[j]);
                    j+=2;
                }
            }
            if(f){
                ans=min(ans,Max);
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