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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int l=1e5+5;
    vector<vector<int>>dp(n+1,vector<int>(l,0));
    dp[1][a[0]]=1;
    for (int i = 2; i <= n; i++)
    {
        dp[i][a[i-1]]=1;
        for (int j = 1; j < l; j++)
        {
            if(dp[i-1][j]==1){
                dp[i][j+a[i-1]]=1;
                dp[i][j]=1;
            }
        }
    }
    vector<int>ans;
    for (int i = 1; i < l; i++)
    {
        if(dp[n][i]==1){
            ans.push_back(i);
        }
    }
    cout<<ans.size()<<endl;
    for (int x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
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
