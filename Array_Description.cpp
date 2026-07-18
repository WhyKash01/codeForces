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
int M = 1e9+7;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=1;
    vector<vector<int>>dp(n,vector<int>(m+2,0));
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        if(a[i]==0){
            if(i==0){
                for (int j = 1; j <= m; j++)
                {
                    dp[i][j]=1;
                }
            }
            else{
                for (int j = 1; j <= m; j++)
                {
                    dp[i][j]=dp[i-1][j];
                    dp[i][j]=(dp[i][j]+dp[i-1][j-1])%M;
                    dp[i][j]=(dp[i][j]+dp[i-1][j+1])%M;
                }
            }
        }
        else{
            dp[i][a[i]]=1;
            if(a[i-1]==0){
                int z=(dp[i-1][a[i]]+dp[i-1][a[i]+1]+dp[i-1][a[i]-1])%M;
                ans=(ans%M*z%M)%M;
            }
            else if(abs(a[i]-a[i-1])>1&&i!=0){
                ans=0;
            }
        }
    }
    if(a[n-1]==0){
        int z=0;
        for (int i = 1; i <= m; i++)
        {
            z=(z+dp[n-1][i])%M;
        }
            ans=(ans%M*z%M)%M;
        
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
