#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x,y;cin>>n>>x>>y;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<pair<int,int>,int>mp;
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=mp[{(x-a[i]%x)%x,a[i]%y}];
        mp[{a[i]%x,a[i]%y}]++;
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