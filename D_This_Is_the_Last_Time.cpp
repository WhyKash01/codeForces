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
int M = 998244353;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        int x,y,z;
        cin>>x>>y>>z;
        v.push_back({z,x});
    }
    sort(v.begin(),v.end(),[](pair<int,int>a,pair<int,int>b){
        if(a.first==b.first){
            return a.second<b.second;
        }
        return a.first<b.first;
    });
    int x=m;
    for (int i = 0; i < n; i++)
    {
        if(v[i].first>x){
            if(v[i].second<=x){
                x=v[i].first;
            }
        }
    }
    cout<<x<<endl;
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
