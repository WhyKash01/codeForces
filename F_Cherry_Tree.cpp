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
    vector<vector<int>>adj(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<bool> visited(n+1, false);
    vector<int>p(n+1,0);
    p[1]=1;
    queue<int> q;
    q.push(1);
    visited[1] = true;
    vector<int>res;
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        if(curr==1){
            res.push_back(curr);
        }
        else if(adj[curr].size()>1){
            res.push_back(curr);
        }
        for (int x : adj[curr]) {
            if (!visited[x]) {
                p[x]=curr;
                visited[x] = true;
                q.push(x);
            }
        }
    }
    vector<vector<int>>dp(n+1,vector<int>(3,0));
    for (int i = 1; i <= n; i++)
    {
        dp[i][0]=1;
    }
    for (int i = res.size()-1; i >= 0; i--)
    {
        int curr=res[i];
        int par=p[curr];
        vector<int>v(3);
        vector<int>ans(3);
        bool z=false;
        for(auto x:adj[curr]){
            if(x!=par){
                if(!z){
                    v=dp[x];
                    z=true;
                }
                else{
                    vector<int>ans(3);
                    for(int i=0;i<3;i++){
                        if(v[i]!=0){
                            for (int j = 0; j < 3; j++)
                            {
                                if(dp[x][j]!=0){
                                    ans[(j+i+4)%3]=1;
                                }
                            }
                        }
                    }
                    v=ans;
                }
            }
        }
        dp[curr][1]=v[1];
        dp[curr][2]=v[2];
    }
    
    if(dp[1][2]==1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
