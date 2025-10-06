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
    int n;
    cin>>n;
    multiset<int> a,b;
    int c[n];
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        a.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        b.insert(x);
    }
    for (int i = 0; i < n; i++)
    {
        cin>>c[i];
    }
    for (int i = 0; i < n; i++)
    {
        int x=*a.rbegin();
        int y=*b.upper_bound(x);
        v.push_back(y-x);
        a.erase(x);
        b.erase(y);
    }
    sort(v.begin(),v.end());
    sort(c,c+n);
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        ans+=v[i]*c[n-i-1];
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
