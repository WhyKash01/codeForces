#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    vector<vector<ll>>v;
    map<ll,ll>mp;
    for (int i = 0; i < n; i++)
    {
        vector<ll> temp;
        ll m;cin>>m;
        for (int j = 0; j < m; j++)
        {
            ll x;
            cin>>x;
            mp[x]++;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    bool ans=false;
    for (int i = 0; i < n; i++)
    {
        bool f=true;
        for (int j = 0; j < v[i].size(); j++)
        {
            if(mp[v[i][j]]<2){
                f=false;
            }
        }
        if(f){
            ans=true;
            break;
        }
        
    }
    ans?cout<<"Yes\n":cout<<"No\n";
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