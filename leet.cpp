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
int M = 998244353;

void solve()
{
    vector<int> x = {1, 2, 1, 3, 2};
    vector<int> y = {5, 3, 4, 6, 2};

    vector<pair<int,int>>v;
        for(int i=0;i<x.size();i++){
            v.push_back({y[i],x[i]});
        }
        sort(v.begin(),v.end());
        int z=0;
        set<int>s;
        int ans=0;
        for(int i=x.size()-1;i>=0;i--){
            if(z>=3){
                break;
            }
            if(s.find(v[i].second)==s.end()){
                ans+=v[i].first;
                z++;
                s.insert(v[i].second);
            }
        }
        if(z==3){
            cout<<ans<<endl;
        }
        else{
            cout<<-1<<endl;
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
