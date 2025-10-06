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
int M = 1000000001;
map<int,int>m;
vector<int>v;
void solve()
{
    int n;
    cin>>n;
    int ans=0;
    while (n>0)
    {
        int x=upper_bound(v.begin(),v.end(),n)-v.begin()-1;
        ans+=m[v[x]];
        n-=v[x];
    }
    cout<<ans<<endl;
    
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    
    int x=0;
    for (int i = 1; i < M; i*=3)
    {
        m[i]=powl(3,1+x)+x*powl(3,x-1);
        x++;
        v.push_back(i);
    }
    cin>>t;
    while (t--)
    {
        solve();
    }
}
