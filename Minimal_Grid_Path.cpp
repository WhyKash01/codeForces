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
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<pair<int,int>>p;
    p.push_back({0,0});
    string ans;
    for (int i = 0; i < n+n-1; i++)
    {
        char c='Z';
        for (auto x:p)
        {
            c=min(c,s[x.first][x.second]);
        }
        ans.push_back(c);
        vector<pair<int,int>>q;
        for(auto x:p){
            if(s[x.first][x.second]==c){
                int a=x.first;
                int b=x.second;
                if(a<n-1){
                    q.push_back({a+1,b});
                }
                if(b<n-1){
                    q.push_back({a,b+1});
                }
            }
        }
        sort(q.begin(), q.end());
        q.erase(unique(q.begin(), q.end()), q.end());
        p=q;
    }
    cout<<ans<<endl;
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
