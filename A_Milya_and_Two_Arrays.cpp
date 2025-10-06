#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    set<ll>a,b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        a.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        b.insert(x);
    }
    if(a.size()>=3||b.size()>=3||(a.size()==2&&b.size()==2)){
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