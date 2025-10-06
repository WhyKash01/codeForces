#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m;cin>>n>>m;
    ll k=n;
    ll c[32]={0};
    vector<ll>v;
    for (int i = 30; i > 0; i--)
    {
        ll x=1<<i;
        if((n&x)!=0){
            v.push_back(i);
            
        }
    }
    ll z=0;
    for (int i = 0; i < v.size(); i++)
    {
        z|=1<<v[i];
        z--;
        if(z>=n-m){
            k|=z;
            break;
        }
        z++;
    }
    for (int i = 0; i <= 30; i++)
    {
        ll x=1<<i;
        if((x|n)>=n-m&&(x|n)<=n+m&&(x&n)==0){
            k|=x;
        }
    }
    cout<<k<<endl;
    
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