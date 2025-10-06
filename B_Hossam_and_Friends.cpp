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
    map<int,int>mp;
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        if(x>y){
            swap(x,y);
        }
        if(mp[x]==0){
            mp[x]=y;
        }
        else{
            mp[x]=min(mp[x],y);
        }
    }
    int ans=n*(n+1)/2;
    int x=0;
    for (int i = n; i > 0; i--)
    {
        if(mp[i]!=0&&x!=0){

            ans-=(n-min(mp[i],x)+1);
            x=min(mp[i],x);
        }
        else if(mp[i]!=0){
            x=mp[i];
            ans-=(n-mp[i]+1);
        }
        else if(x!=0){
            ans-=(n-x+1);
        }
    }
    cout<<ans<<endl;
    return;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
