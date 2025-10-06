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
int func(vector<vector<int>>a,int x,int y,int nums){
    for (int i = 0; i < a[y].size(); i++)
    {
        if(a[y][i]!=x){
            
        }
    }
    
}
void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>a(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int Max=0;
    int x;
    for (int i = 1; i <= n; i++)
    {
        if(a[i].size()>Max){
            Max=a[i].size();
            x=i;
        }
    }
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
