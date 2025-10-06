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
    int n;cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int ans=LLONG_MAX;
    int x=abs(a[0]-b[0])+abs(a[n-1]-b[n-1]);
    ans=min(ans,x);
    x=abs(a[0]-b[n-1])+abs(a[n-1]-b[0]);
    ans=min(ans,x);
    int y=abs(a[0]-b[0]);
    int Min=LLONG_MAX,Min1=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        Min=min(Min,abs(a[n-1]-b[i]));
        Min1=min(Min1,abs(b[n-1]-a[i]));
    }
    y+=Min+Min1;
    ans=min(ans,y);
    y=abs(b[0]-a[n-1]);
    Min=LLONG_MAX,Min1=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        Min=min(Min,abs(b[n-1]-a[i]));
        Min1=min(Min1,abs(a[0]-b[i]));
    }
    y+=Min+Min1;
    ans=min(ans,y);
    y=abs(b[n-1]-a[0]);
    Min=LLONG_MAX,Min1=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        Min=min(Min,abs(b[0]-a[i]));
        Min1=min(Min1,abs(a[n-1]-b[i]));
    }
    y+=Min+Min1;
    ans=min(ans,y);
    y=abs(b[n-1]-a[n-1]);
    Min=LLONG_MAX,Min1=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        Min=min(Min,abs(a[0]-b[i]));
        Min1=min(Min1,abs(b[0]-a[i]));
    }
    y+=Min+Min1;
    ans=min(ans,y);
    int p=LLONG_MAX,q=LLONG_MAX,r=LLONG_MAX,s=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        p=min(p,abs(a[0]-b[i]));
        q=min(q,abs(a[n-1]-b[i]));
        r=min(r,abs(a[i]-b[0]));
        s=min(s,abs(a[i]-b[n-1]));
    }
    ans=min(ans,p+q+r+s);
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
