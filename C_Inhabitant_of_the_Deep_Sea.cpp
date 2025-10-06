#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;cin>>n>>k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(k%2!=0){
        a[0]--;
        k--;
    }
    ll l=0,r=n-1;
    if(a[0]==0){
        l=1;
    }
    bool f=true;
    while(r-l>0){
        if(k<=0){
            f=false;
            k=0;
            break;
        }
        ll Min=min(a[l],a[r]);
        if(k<Min*2){
            f=false;
            k=0;
            break;
        }
        else if(k==Min*2){
            if(a[l]==Min){
                l++;
            }
            if(a[r]==Min){
                r--;
            }
            k=0;
            f=false;
            break;
        }
        else{
            if(a[l]==Min){
                l++;
            }
            else{
                a[l]-=Min;
            }
            if(a[r]==Min){
                r--;
            }
            else{
                a[r]-=Min;
            }
            k-=2*Min;
        }
    }
    if(l==r){
        if(f&&a[l]>0&&a[l]<=k){
            r--;
        }
    }
    cout<<n-(r-l+1)<<endl;
    
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