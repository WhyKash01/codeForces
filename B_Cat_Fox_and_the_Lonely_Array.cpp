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
    }
    ll cnt=1,o=a[0];
    for (int i = 1; i < n; i++)
    {
        ll x=o|a[i];
        if(o!=x){
            cnt=i+1;
            o=x;
        }
    }
    cout<<cnt<<endl;
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