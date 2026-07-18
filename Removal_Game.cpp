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
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    vector<vector<int>>dp(n,vector<int>(n));
    for (int l = 0; l < n; l++)
    {
        for (int i = 0; i < n-l; i++)
        {
            int j=i+l;
            if(l==0){
                dp[i][j]=a[i];
            }   
            else{
                dp[i][j]=max(a[i]-dp[i+1][j],a[j]-dp[i][j-1]);
            }
        }
    }
    int ans=(sum+dp[0][n-1])/2;
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
