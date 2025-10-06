#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    if(n==k){
        ll x=1;
        for (int i = 1; i < n; i+=2)
        {
            if(a[i]!=x){
                break;
            }
            x++;
        }
        cout<<x<<endl;
    }
    else{
        bool f=true;
        ll x=min(n,n-k+2);
        for (int i = 1; i < x; i++)
        {
            if(a[i]!=1){
                f=false;
                break;
            }
        }
        if(f){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
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