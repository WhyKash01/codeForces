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
        if(i%2!=0){
            a[i]=-a[i];
        }
    }
    ll pre[n+1];
    pre[0]=0;
    for (int i = 0; i < n; i++)
    {
        pre[i+1]=a[i]+pre[i];
    }
    set<ll> s;
    bool f=false;
    for (int i = 0; i < n+1; i++)
    {
        if(s.find(pre[i])==s.end()){
            s.insert(pre[i]);
        }
        else{
            f=true;
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
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}