#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    vector<pair<ll,ll>> p;
    map<ll,vector<pair<ll,ll>>>m;
    set<ll>v;
    for (int i = 0; i < n; i++)
    {
        ll x,y;
        cin>>x>>y;
        m[x+y].push_back({x,y});
        v.insert(x+y);
    }
    for (auto i:v)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout<<m[i][j].first<<" "<<m[i][j].second<<" ";
        }
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