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
    int x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    int n;
    cin>>n;
    map<pair<int,int>,int>m;
    for (int i = 0; i < n; i++)
    {
        int r,a,b;
        cin>>r>>a>>b;
        for (int j = a; j <= b; j++)
        {
            m[{r,j}]=1;
        }
    }
    queue<pair<pair<int,int>,int>>q;
    q.push({{x1,y1},0});
    int ans=-1;
    m[{x1,y1}]=0;
    vi dx={-1,-1,-1,0,0,1,1,1};
    vi dy={1,0,-1,1,-1,1,0,-1};
    while(!q.empty()){
        auto [p,d]=q.front();
        int x=p.first,y=p.second;
        q.pop();
        if(x==x2&&y==y2){
            ans=d;
            break;
        }
        for(int i=0;i<8;i++){
            int a=x+dx[i];
            int b=y+dy[i];
            if(m[{a,b}]){
                m[{a,b}]=0;
                q.push({{a,b},d+1});
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