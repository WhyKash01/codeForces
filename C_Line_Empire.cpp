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
    int n,a,b;
    cin>>n>>a>>b;
    int v[n+1];
    v[0]=0;
    int pref[n+1];
    pref[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i+1];
        pref[i+1]=pref[i]+v[i+1];
    }
    int ans=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        int x=v[i]*(a+b);
        int y=(pref[n]-pref[i]-v[i]*(n-i))*b;
        ans=min(ans,x+y);
    }
    cout<<ans<<endl;
    
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
