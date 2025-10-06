#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,q;
    cin>>n>>q;
    ll a[n];
    ll sum=0;
    set<int> changed;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
        changed.insert(i+1);
    }
    ll change=-1;
    for (int i = 0; i < q; i++)
    {
        ll f;
        cin>>f;
        if(f==1){
            ll i,x;
            cin>>i>>x;
            if(changed.find(i)!=changed.end()){
                
                ll c=x-a[i-1];
                sum+=c;
                a[i-1]=x;
            }
            else{
                ll c=x-change;
                sum+=c;
                changed.insert(i);
                a[i-1]=x;
            }
            cout<<sum<<endl;
        }
        else{
            ll x;
            cin>>x;
            changed.clear();
            change=x;
            sum=n*x;
            cout<<n*x<<endl;
        }
    }
    
    return;
}

int32_t main()
{
    solve();
    return 0;
}