#include <bits/stdc++.h>
#define ll long long
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
    ll m;cin>>m;
    map<ll,ll>mp;
    ll c;
    for (int i = 0; i < m; i++)
    {
        cin>>c;
        mp[c]++;
    }
    bool f=true,last=false;
    ll x=-1;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]){
            x=i;
        }
        if(b[i]==c){
            last=true;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=b[i]){
            if(mp[b[i]]==0){
                f=false;
                break;
            }
            mp[b[i]]--;
        }
    }
    if(last){
        f?cout<<"YES\n":cout<<"NO\n";
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
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}