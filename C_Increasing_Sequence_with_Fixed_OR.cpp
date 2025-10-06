#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < 60; i++)
    {
        ll x = 1LL << i;
        if ((n & x) != 0)
        {
            v.push_back(i);
        }
    }
    set<ll> ans;
    for (int i = 0; i < v.size(); i++)
    {
        ll x = 1LL << v[i];
        ans.insert((n ^ x));
    }
    ans.erase(0);
    ans.insert(n);
    cout<<ans.size()<<endl;
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
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