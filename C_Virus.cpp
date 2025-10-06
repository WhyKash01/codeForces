#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,q;
    cin>>n>>q;
    ll inf[q+1];
    ll Min=n+1;
    for (int i = 0; i < q; i++)
    {
        cin>>inf[i];
        Min=min(Min,inf[i]);
    }
    inf[q]=n+Min;
    vector<ll> v;
    sort(inf,inf+(q+1));
    for (int i = 0; i < q; i++)
    {
        v.push_back(inf[i+1]-inf[i]-1);
    }
    ll cnt=0,sum=0;
    for(int i=0;i<v.size();i++){
        ll curr=v[i]-(2*cnt);
        if(curr>0){
            sum+=max(1ll,curr-1);
        }
        else{
            break;
        }
        cnt+=2;
    }
    ll k=sum;
    sort(v.begin(),v.end(),[](int a,int b){
        return a>b;
    });
    
    cnt=0,sum=0;
    for(int i=0;i<v.size();i++){
        ll curr=v[i]-(2*cnt);
        if(curr>0){
            sum+=max(1ll,curr-1);
        }
        else{
            break;
        }
        cnt+=2;
    }
    cout<<n-max(k,sum)<<endl;
    return;
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}