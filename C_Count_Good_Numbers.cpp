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
int M = 998244353;

void solve()
{
    int x,y;
    cin>>x>>y;
    vector<int>a={2,3,5,7};
    vector<int>b={6,10,14,15,21,35};
    vector<int>c={30,42,70,105};
    vector<int>d={210};
    int ans=0;
    for (int i = 0; i < a.size(); i++)
    {
        ans+=y/a[i];
        ans-=(x-1)/a[i];
    }
    for (int i = 0; i < b.size(); i++)
    {
        ans-=y/b[i];
        ans+=(x-1)/b[i];
    }
    for (int i = 0; i < c.size(); i++)
    {
        ans+=y/c[i];
        ans-=(x-1)/c[i];
    }
    for (int i = 0; i < d.size(); i++)
    {
        ans-=y/d[i];
        ans+=(x-1)/d[i];
    }
    cout<<(y-x+1)-ans<<endl;
    
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
