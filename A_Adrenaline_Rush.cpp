#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
    set<int>s;
    int a[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i-1];
        s.insert(i);
    }
    vector<pair<int,int>>v;
    for (int i = n-1; i >= 0; i--)
    {
        int x=a[i];
        s.erase(x);
        for (int j = x-1; j >= 1; j--)
        {
            if(s.count(j)){
                v.push_back({x,j});
            }
        }
        for(auto z:s){
            v.push_back({z,x});
        }
    }
    cout<<v.size()<<endl;
    for (auto x:v)
    {
        cout<<x.first<<" "<<x.second<<endl;
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
