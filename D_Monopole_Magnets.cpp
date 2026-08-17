#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int inf=LLONG_MAX;
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>g(n);
    for (int i = 0; i < n; i++)
    {
        cin>>g[i];
    }
    bool ans=true,r=true,c=true;
    for (int i = 0; i < n; i++)
    {
        int x=0,y=0;
        if(!ans){
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if(g[i][j]=='#'&&y!=0){
                ans=false;
                break;
            }
            else if(g[i][j]=='#'){
                x++;
            }
            else if(x!=0){
                y=1;
            }
        }
        if(x==0) r=false;
        
    }
    for (int j = 0; j < m; j++)
    {
        int x=0,y=0;
        if(!ans) break;
        for (int i = 0; i < n; i++)
        {
            if(g[i][j]=='#'&&y!=0){
                ans=false;
                break;
            }
            else if(g[i][j]=='#'){
                x++;
            }
            else if(x!=0){
                y=1;
            }
        }
        if(x==0) c=false;
    }
    
    if(!ans||(r&&!c)||(!r&&c)){
        cout<<-1<<endl;
    }
    else{
        vi dx={-1,1,0,0};
        vi dy={0,0,-1,1};
        int z=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(g[i][j]=='#'){
                    queue<pair<int,int>>q;
                    q.push({i,j});
                    z++;
                    g[i][j]='.';
                    while(!q.empty()){
                        auto [a,b]=q.front();
                        
                        q.pop();
                        for(int i=0;i<4;i++){
                            int x=a+dx[i];
                            int y=b+dy[i];
                            if(x<0||x>=n||y<0||y>=m||g[x][y]!='#'){
                                continue;
                            }
                            q.push({x,y});
                            g[x][y]='.';
                        }
                    }
                }
            }
        }
        cout<<z<<endl;
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