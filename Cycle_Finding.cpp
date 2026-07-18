#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
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

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<ppi>edge;
    for (int i = 0; i < m; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        edge.push_back({{x,y},z});
    }
    vector<int>dis(n+1,0);
    vector<int>parent(n+1,-1);
    int l=-1;
    for (int i = 0; i < n; i++)
    {
        l=-1;
        for (auto it:edge)
        {
            int u=it.first.first;
            int v=it.first.second;
            int w=it.second;
            if(dis[u]+w<dis[v]){
                dis[v]=dis[u]+w;
                parent[v]=u;
                l=v;
            }
        }
    }
    if(l==-1){
        cout<<"NO\n";
    }
    else{
        int s=l;
        for (int i = 0; i < n; i++)
        {
            s=parent[s];
        }
        vector<int>ans;
        int curr=s;
        while(true){
            ans.push_back(curr);
            if(curr==s&&ans.size()>1){
                break;
            }
            curr=parent[curr];
        }
        reverse(ans.begin(), ans.end());
        cout<<"YES\n";
        for(auto x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
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