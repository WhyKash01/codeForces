#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    ll a[x];
    for (int i = 0; i < x; i++)
    {
        cin>>a[i];
    }
    sort(a,a+x);
    ll side=x;
    vector<ll> v;
    
    for (int i = 0; i < x; i++)
    {
        if(i==x-1){
            if((n+a[0])-a[i]>1){
            v.push_back((n+a[0])-a[i]-1);
            }
        }
        else{
            if(a[i+1]-a[i]>1){
                v.push_back(a[i+1]-a[i]-1);
            }
        }
    }
    map<ll,ll>m;
    vector<ll> o,e;
    for (int i = 0; i < v.size(); i++)
    {
        if(v[i]%2==0){
            if(m[v[i]]==0){
                e.push_back(v[i]);
            }
            m[v[i]]++;
        }
        else{
            if(m[v[i]]==0){
                o.push_back(v[i]);
            }
            m[v[i]]++;
        }
    }
    ll ans=x-2;
    sort(o.begin(),o.end());
    sort(e.begin(),e.end());
    for (int i = 0; i < o.size(); i++)
    {
        if((o[i]/2)*m[o[i]]<=y){
            ans+=m[o[i]]*o[i];
            y-=(o[i]/2)*m[o[i]];
        }
        else{
            ll k=y/(o[i]/2);
            ans+=k*o[i];
            y-=k*(o[i]/2);
            ans+=y*2;
            y=0;
        }
    }
    for (int i = 0; i < e.size(); i++)
    {
        if((e[i]/2)*m[e[i]]<=y){
            ans+=m[e[i]]*e[i];
            y-=(e[i]/2)*m[e[i]];
        }
        else{
            ans+=y*2;
            y=0;
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