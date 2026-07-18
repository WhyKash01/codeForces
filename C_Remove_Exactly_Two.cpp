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
    vector<vector<int>>v(n+1);
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    int ans=0;
    int num=0;
    int Max=0;
    int x=0;
    for (int i = 1; i <= n; i++)
    {
        if(v[i].size()>Max){
            Max=v[i].size();
            x=i;
            num=1;
        }
        else if(v[i].size()==Max){
            num++;
        }
    }
    if(num>2){
        cout<<Max+Max-1<<endl;
    }
    else{
        set<int>s;
        for(auto z:v[x]){
            s.insert(z);
        }
        int l=v[x].size();
        for (int i = 1; i <= n; i++)
        {
            int k=v[i].size();
            if(i==x){
                continue;
            }
            else if(s.find(i)!=s.end()){
                ans=max(ans,l+k-2);
            }
            else{
                ans=max(ans,l+k-1);
            }
        }
        cout<<ans<<endl;
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
