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
int INF= 1e14;
void solve()
{
    int n,m,q;
    cin>>n>>m>>q;
    vector<vector<int>>dis(n+1,vector<int>(n+1,INF));
    for (int i = 1; i <= n; i++)
    {
        dis[i][i]=0;
    }
    for (int i = 0; i < m; i++)
    {
        int x,y,d;
        cin>>x>>y>>d;
        dis[x][y]=min(d,dis[x][y]);
        dis[y][x]=min(d,dis[y][x]);
    }
    for(int k=1; k<=n; k++){
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                dis[i][j]=min(dis[i][j],dis[i][k]+dis[k][j]);
            }
        }
        
    }
    for (int i = 0; i < q; i++)
    {
        int x,y;
        cin>>x>>y;
        if(dis[x][y]>=INF){
            cout<<-1<<endl;
        }
        else{
            cout<<dis[x][y]<<endl;
        }
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