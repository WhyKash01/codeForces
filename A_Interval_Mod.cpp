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
int MOD = 1e9 + 7;
int f[100009][2],g[100009];

void solve()
{
    int n,k,p,q;
    cin>>n>>k>>p>>q;
    if(p<q){
        swap(p,q);
    }
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        int x=a[i]%q,y=(a[i]%p)%q;
        f[i+1][0]=f[i][0]+x;
        f[i+1][1]=f[i][1]+y;
        g[i+1]=g[i]+min(x,y);
    }
    int ans=LLONG_MAX;
    for (int i = k; i <= n; i++)
    {
        ans=min(ans,min(f[i][0]-f[i-k][0],f[i][1]-f[i-k][1])+g[i-k]+g[n]-g[i]);
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