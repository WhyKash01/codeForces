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
    vector<ll>e,o;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            e.push_back(i+1);
        }
        else{
            o.push_back(i+1);
        }
    }
    vector<pair<ll,ll>>v;
    if(a[0]%2==0){
        
        ll z=e[e.size()-1];
        for (int i = 0; i < e.size()-1; i++)
        {
            v.push_back({e[i],z});
        }
        for (int i = 0; i < o.size(); i++)
        {
            v.push_back({1,o[i]});
        }
        
    }
    else{
        ll z=o[o.size()-1];
        for (int i = 0; i < o.size()-1; i++)
        {
            v.push_back({o[i],z});
        }
        for (int i = 0; i < e.size(); i++)
        {
            v.push_back({1,e[i]});
        }
    }
    cout<<v.size()<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
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