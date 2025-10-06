#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,x,y;
    cin>>n>>x>>y;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    ll Min = -inf;
    ll Max = inf;
    for (int i = 0; i < n; i++)
    {
        Min = max(Min, (b[i] + y) - (a[i] + x));
        Max = min(Max, (b[i] - y) - (a[i] - x));
    }
    (Min<=Max)?cout<<"YES\n":cout<<"NO\n";
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