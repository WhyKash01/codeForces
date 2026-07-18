#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
int MOD = 1e9 + 7;

void solve()
{
    int n;
    cin>>n;
    vector<pair<double,double>>v(n);
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v[i]={x,y};
    }
    double s=v[n-1].first;
    for (int i = n-2; i >=0 ; i--)
    {
        double x=v[i].first,y=(100-v[i].second)/100;
        if(s*y+x>=s){
            s=s*y+x;
        }
        // cout<<s<<" "<<x<<" "<<y<<endl;
    }
    cout<<fixed << setprecision(10) << s<<endl;
      
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