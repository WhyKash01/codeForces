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
    int n;
    cin>>n;
    int a[n],b[n],dp[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        dp[i]=b[i];
    }
    int Max=-1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(a[j]<=a[i]){
                dp[i]=max(dp[i],dp[j]+b[i]);
            }
        }
        Max=max(Max,dp[i]);
    }
    cout<<accumulate(b,b+n,0LL)-Max<<endl;
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
