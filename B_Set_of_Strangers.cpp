#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m];
    set<ll>s;
    map<ll,ll>mp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            s.insert(a[i][j]);
        }
    }
    ll Max=1;
    ll ans=0;
    for(auto i:s){
        mp[i]=1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i<n-1&&a[i][j]==a[i+1][j]){
                mp[a[i][j]]=2;
                Max=2;
            }
            if(j<m-1&&a[i][j]==a[i][j+1]){
                mp[a[i][j]]=2;
                Max=2;
            }
        }
    }
    for(auto i:s){
        ans+=mp[i];
    }
    cout<<ans-Max<<endl;
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