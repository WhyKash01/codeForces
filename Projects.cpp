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
int M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<pair<int,pair<int,int>>>a;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        a.push_back({y,{x,z}});
    }
    sort(a.begin(),a.end());
    vector<int>v;
    v.push_back(0);
    map<int,int>m;
    m[0]=0;
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        int y=a[i].first,x=a[i].second.first,z=a[i].second.second;
        int p=*(--upper_bound(v.begin(),v.end(),y));
        int q=*(--lower_bound(v.begin(),v.end(),x));
        m[y]=max(m[y],m[q]+z);
        m[y]=max(m[y],m[p]);
        v.push_back(y);
        ans=max(ans,m[y]);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
