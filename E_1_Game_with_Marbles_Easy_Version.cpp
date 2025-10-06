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
    cin >> n;
    int a[n], b[n];
    vector<pair<int, int>> ali;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        ali.push_back({a[i], b[i]});
    }
    sort(ali.begin(),ali.end(),[&](pair<int,int>&p1,pair<int,int>&p2){
        return p1.first+p1.second>p2.first+p2.second;
    });
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            ans+=ali[i].first-1;
        }
        else{
            ans-=ali[i].second-1;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}
