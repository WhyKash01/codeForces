#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll x=LONG_LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        a[i]-=b[i];
        x=max(x,a[i]);
    }
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==x){
            v.push_back(i+1);
        }
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
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