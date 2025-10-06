#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m;cin>>n>>m;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    ll ans=0;
    for (int i = m; i < n; i++)
    {
        ans+=min(a[i],b[i]);
    }
    ll ans1=LLONG_MAX,sum=0;
    for (int i = 0; i < m; i++)
    {
        sum+=b[i];
    }
    for (int i = 0; i < m; i++)
    {
        sum-=b[i];
        ans1=min(ans1,sum+a[i]);
    }
    cout<< ans1+ans<<endl;
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