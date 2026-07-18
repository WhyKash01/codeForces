#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 998244353;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back({x,1});
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back({x,2});
    }
    sort(v.begin(),v.end());
    int cnt=n,bad=0,ans=0;
    for (int i = 0; i < 2*n; )
    {
        int x=v[i].first;
        int y=v[i].second;
        if(bad<=m){
            ans=max(ans,x*cnt);
        }
        while(i<2*n&&v[i].first==x){
            bad+=(v[i].second == 1);
            bad-=(v[i].second == 2);
            cnt-=(v[i].second == 2);
            i++;
        }
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
