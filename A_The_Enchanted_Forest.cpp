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

void solve()
{
    int n,k;cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p[n+1];
    p[0]=0;
    for (int i = 0; i < n; i++)
    {
        p[i+1]=p[i]+a[i];
    }
    int ans=0;
    if(k>=n){
        ans+=p[n];
        int x=max(k-n,1LL);
        ans+=(k*(k-1))/2-(x*(x-1))/2;
    }
    else{
        ans+=(k*(k-1))/2;
        int z=0;
        for (int i = 0; i <= n-k; i++)
        {
            z=max(z,p[i+k]-p[i]);
        }
        ans+=z;
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
