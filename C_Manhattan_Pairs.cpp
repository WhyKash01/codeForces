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
    int n;
    cin>>n;
    pair<pair<int,int>,int>v[n];
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v[i]={{x,y},i+1};
    }
    sort(v,v+n,[](pair<pair<int,int>,int> a,pair<pair<int,int>,int> b){
        if(a.first.first==b.first.first){
            return a.first.second<b.first.second;
        }
        return a.first.first<b.first.first;
    });
    for (int i = 0; i < n/2; i++)
    {
        cout<<v[i].second<<" "<<v[i+n/2].second<<endl;
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
