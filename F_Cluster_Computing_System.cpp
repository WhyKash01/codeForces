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
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int p[n],q[n];
    p[0]=a[0];
    q[n-1]=a[n-1];
    for (int i = 1; i < n; i++)
    {
        p[i]=__gcd(p[i-1],a[i]);
    }
    for (int i = n-2; i >= 0; i--)
    {
        q[i]=__gcd(q[i+1],a[i]);
    }
    int ans=p[n-1];
    for (int i = 1; i < n-1; i++)
    {
        ans+=min(p[i],q[i]);
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
