#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
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

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m+1];
    int pref[n+1];
    pref[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    b[0]=0;
    for (int i = 1; i <= m; i++)
    {
        cin>>b[i];
    }
    int ans=0;
    sort(b,b+m+1);
    for (int i = m; i > 0; i--)
    {
        ans+=abs(pref[b[i]]-pref[b[i-1]]);
    }
    cout<<ans+(pref[n]-pref[b[m]])<<"\n";
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