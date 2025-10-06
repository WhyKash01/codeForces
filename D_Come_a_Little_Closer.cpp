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
    vector<pii>v;
    set<pii>s1,s2;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.pb({x,y});
        s1.insert({x,y});
        s2.insert({y,x});
    }
    if(n==1){
        cout<<1<<endl;
        return;
    }
    int Min=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        s1.erase({v[i]});
        s2.erase({v[i].second,v[i].first});
        int x=s1.rbegin()->first-s1.begin()->first+1;
        int y=s2.rbegin()->first-s2.begin()->first+1;
        s1.insert(v[i]);
        s2.insert({v[i].second,v[i].first});
        if(x*y>=n){
            Min=min(Min,x*y);
        }
        else{
            if(x<y){
                y++;
            }
            else{
                x++;
            }
            Min=min(Min,x*y);
        }
    }
    cout<<Min<<endl;
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
