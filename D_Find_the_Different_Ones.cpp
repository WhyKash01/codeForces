#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n+1];
    a[0]=0;
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    ll pre[n+1];
    pre[0]=-1;
    for (int i = 1; i < n+1; i++)
    {
        pre[i]=pre[i-1];
        if(a[i]!=a[i-1]){
            pre[i]=i-1;
        }
    }
    ll q;cin>>q;
    for (int i = 0; i < q; i++)
    {
        ll l,r;cin>>l>>r;
        if(pre[r]>=l){
            cout<<pre[r]<<" "<<r<<endl;
        }
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
    
    cout<<endl;
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