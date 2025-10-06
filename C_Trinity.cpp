#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    ll Min=LLONG_MAX;
    for (int i = 0; i < n-2; i++)
    {
        ll x=a[i]+a[i+1];
        ll y=a+n-lower_bound(a+i+2,a+n,x);
        Min=min(Min,y+i);
    }
    cout<<Min<<endl;
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