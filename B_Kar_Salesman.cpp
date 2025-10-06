#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,x;cin>>n>>x;
    ll a[n];
    ll sum=0,Max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        Max=max(Max,a[i]);
        sum+=a[i];
    }
    sum=ceill((double)sum/x);
    cout<<max(sum,Max)<<endl;
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