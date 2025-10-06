#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m,q;cin>>n>>m>>q;
    ll a[n],b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    ll it=0;
    map<ll,ll>mp;
    bool ans=true;
    for (int i = 0; i < m; i++)
    {
        if(b[i]==a[it]||mp[b[i]]>0){
            if(mp[b[i]]==0){
            it++;
            }
            mp[b[i]]++;
        }
        else{
            ans=false;
            break;
        }
    }
    (ans)?cout<<"YA\n":cout<<"TIDAK\n";
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