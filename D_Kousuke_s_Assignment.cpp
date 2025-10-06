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
    ll pre[n];
    ll sum=0;
    for (int i = 0; i < n; i++)
    {
        sum+=a[i];
        pre[i]=sum;
    }
    set<ll> s;
    s.insert(0);
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        
        if(s.find(pre[i])!=s.end()){
            ans++;
            s.clear();
            s.insert(pre[i]);
        }
        else{
            s.insert(pre[i]);
        }
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