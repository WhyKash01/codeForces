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
    map<ll,ll>v;
    for (int i = 0; i < n; i++)
    {
        ll x=2,y=a[i];
        while(x*x<=a[i]){
            while(y%x==0){
                v[x]++;
                y/=x;
            }
            x++;
        }
        if(y > 1) v[y]++;
    }
    bool f=true;
    for(auto i:v){
        if(i.second%n!=0){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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