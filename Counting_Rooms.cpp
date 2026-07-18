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
int MOD = 1e9 + 7;
void dfs(vector<string>&a,vector<vector<int>>&vis,int i,int j){
    pair<int,int> b[4]={{0,1},{1,0},{0,-1},{-1,0}};
    int n=a.size();
    int m=a[0].size();
    vis[i][j]=1;
    for (int k = 0; k < 4; k++)
    {
        int x=i+b[k].first;
        int y=j+b[k].second;
        if(x>=0&&x<n&&y>=0&&y<m){
            if(vis[x][y]==0&&a[x][y]=='.'){
                dfs(a,vis,x,y);
            }
        }
    }
    
}
void solve() 
{
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
       
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<vector<int>>vis(n,vector<int>(m,0));
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]=='.'&&vis[i][j]==0){
                ans++;
                dfs(a,vis,i,j);
            }
        }
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