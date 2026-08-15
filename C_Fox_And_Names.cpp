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
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
bool dfs(vector<vector<int>> &adj,vector<int> &v,int curr)
{   
    bool ans=true;
    for(auto z:adj[curr]){
        if(v[z]!=-1){
            if(v[z]==v[curr]) return false;
        }
        else{
            v[z]=v[curr]^1;
            ans=ans && dfs(adj,v,z);
        }
    }
    return ans;
}
void solve()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> adj(n + 1);
    vector<pair<int,int>>p;
    for (int i = 0; i < k; i++)
    {
        int x, y;
        cin >> x >> y;
        p.push_back({x,y});
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    vector<int>v(n+1,-1);
    v[1]=0;
    bool f=dfs(adj,v,1);
    if(!f){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
        string s;
        for(auto [x,y]:p){
            if(v[x]==0){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
        }
        cout<<s<<endl;
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