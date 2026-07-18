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
    int n;
    cin>>n;
    
    if((n%4==0)||((n+1)%4==0)){
        int x=(n*(n+1))/4;
        vector<int>dp(x+1,0);
        dp[0]=1;
        for (int i = 1; i < n; i++)
        {
            for (int j = x; j >= i; j--)
            {
                dp[j]=(dp[j]+dp[j-i])%M;
            }
        }
        
        cout<<dp[x]<<endl;
    }
    else{
        cout<<0<<endl;
    }

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
