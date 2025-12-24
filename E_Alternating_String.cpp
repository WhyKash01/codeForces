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
void solve() {
    int n;
    string s;cin>>n>>s;
    int dp[n+1][26][2];
    for (int i = 0; i < 26; i++)
    {
        dp[0][i][0]=0;
        dp[0][i][1]=0;
    }
    for (int i = 1; i <= n; i++)
    {
        int c=s[i-1]-'a';
        if(i%2==0){
            dp[i][c][0]=dp[i-1][c][0]+1;
            dp[i][c][1]=dp[i-1][c][1];
        }
        else{
            dp[i][c][0]=dp[i-1][c][0];
            dp[i][c][1]=dp[i-1][c][1]+1;
        }
        for (int j = 0; j < 26; j++)
        {
            if(j!=c){
                dp[i][j][0]=dp[i-1][j][0];
                dp[i][j][1]=dp[i-1][j][1];
            }
        }
    }
    if(n%2==0){
        int x=0,y=0;
        for (int i = 0; i < 26; i++)
        {
            x=max(x,dp[n][i][0]);
            y=max(y,dp[n][i][1]);
        }
        cout<<n-x-y<<endl;
    }else{
        int ans=n;
        for (int i = 1; i <= n; i++)
        {
            int c=s[i-1]-'a';
            int x=0,y=0;
            for(int j=0;j<26;j++){
                int e=0,r=0;
                e+=dp[i-1][j][0];
                e+=dp[n][j][1]-dp[i][j][1];
                r+=dp[i-1][j][1];
                r+=dp[n][j][0]-dp[i][j][0];
                x=max(x,e);
                y=max(y,r);         
            }
            ans=min(ans,n-x-y);
        }
        cout<<ans<<endl;
    }
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