#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 1000000007;

void solve()
{
    int n;
    cin>>n;
    map<pii,int>m;
    set<pii>s1,s2;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        if(m[{x,y}]==0){
            m[{x,y}]=z;
        }
        else{
            m[{x,y}]=min(z,m[{x,y}]);
        }
        s1.insert({x,z});
        s2.insert({-y,z});
        int ans=(s1.begin()->second+s2.begin()->second);
        
        if(m[{s1.begin()->first,-s2.begin()->first}]!=0){
            ans=min(ans,m[{s1.begin()->first,-s2.begin()->first}]);
        }
        cout<<ans<<endl;
    }
    
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
