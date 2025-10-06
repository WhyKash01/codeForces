#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans[n]={0};
    vector<pair<ll,ll>>v;
    for (int i = 1; i < n; i++)
    {
        if(a[i-1]>a[i]){
            v.push_back({a[i-1]-a[i],i});
        }
    }
    set<ll>s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    
    sort(v.begin(),v.end());
    if(v.size()>0){
        ll x=-1;
        for (int i = 0; i < v.size(); i++)
        {
            if(v[i].first>x){
                ans[v[i].first-1]=v[i].second+1;
                x=v[i].first+1;
                s.erase(x-1);
            }
            else{
                ans[x-1]=v[i].second+1;
                s.erase(x);
                x++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(ans[i]==0){
            ans[*s.begin()-1]=1;
            s.erase(s.begin());
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<ans[i]<<" ";
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