#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    set<ll> m;
    vector<set<ll>>v;
    for (int i = 0; i < n; i++)
    {
        set<ll>s;
        ll x;cin>>x;
        for (int i = 0; i < x; i++)
        {
            ll y;
            cin>>y;
            m.insert(y);
            s.insert(y);
        }
        v.push_back(s);
    }
    ll Max=0;
    for (auto i:m)
    {
        set<ll>s;
        for (int j = 0; j < v.size(); j++)
        {
            if(v[j].find(i)==v[j].end()){
                for (auto k:v[j])
                {
                    s.insert(k);
                }
                
            }
        }
        ll len=s.size();
        Max=max(Max,len);
    }
    cout<<Max<<endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin>>tc;
    while (tc--)
        solve();
    return 0;
}