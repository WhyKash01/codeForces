#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<ll,ll>mp;
    vector<pair<ll,ll>>v;
    for (int i = 0; i < m; i++)
    {
        pair<ll,ll>p;
        cin>>p.first>>p.second;
        v.push_back(p);
        mp[p.first]++;
        mp[p.second]++;
    }
    ll ans=LLONG_MAX;
    for (int i = 0; i < m; i++)
    {
        if(mp[v[i].first]%2==0&&mp[v[i].second]%2==0){
            ans=min(ans,a[v[i].first-1]+a[v[i].second-1]);
        }
        else{
            if(mp[v[i].first]%2!=0){
                ans=min(ans,a[v[i].first-1]);
            }
            if(mp[v[i].second]%2!=0){
                ans=min(ans,a[v[i].second-1]);
            }
        }
    }
    if(m%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<ans<<endl;
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