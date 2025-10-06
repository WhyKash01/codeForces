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
    for (int i = 0; i < x; i++)
    {
        if(i==x-1){
            if((n>a[i]&&n==a[i]+1&&a[0]==1)||(n==a[i]&&a[0]==2)){
                side++;
            }
        }
        else{
            if(a[i]+2==a[i+1]){
                side++;
            }
        }
    }
    cout<<max(0ll,side-2)<<endl;
    
    
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