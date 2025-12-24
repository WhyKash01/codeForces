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
const int N=1e6+10;
const int M=1e9+7;
int dp[N];
int vis[N];
int rec(int n,int sum){

    if(sum>n){
        return 0;
    }
    if(sum==n){
        return 1;
    }
    if(vis[sum]){
        return dp[sum];
    }
    vis[sum]=1;
    int ans=0;
    for (int i = 1; i <= 6; i++)
    {
        ans=(ans+rec(n,sum+i))%M;
    }
    return dp[sum]=ans;
}
void solve()
{
    int n;cin>>n;
    memset(dp,0,n);
    memset(vis,0,n);
    cout<<rec(n,0)<<endl;
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
