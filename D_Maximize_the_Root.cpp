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
int inf =2e15+5;
const int N=2e5+20;
int n,a[N];
vector<int>g[N];
bool dfs(int v,int val){
    if(g[v].empty()&&a[v]<val){
        return false;
    }
    if(!v){
        val=max(0LL,val-a[v]);
    }
    else if(a[v]<val){
        val=min(inf,val+val-a[v]);
    }
    for (int x:g[v])
    {
        if(!dfs(x,val)){
            return false;
        }
    }
    return true;
}
void solve() 
{
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 1; i < n; i++)
    {
        int x;cin>>x;
        x--;
        g[x].push_back(i);
    }
    int l=0,r=inf;
    while(r-l>1){
        int mid=(l+r)/2;
        if(dfs(0,mid)){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    cout<<l<<endl;
    for (int i = 0; i < n; i++)
    {
        g[i].clear();
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
