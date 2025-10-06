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

void solve(){
    int n;cin>>n;
    int a[n];
    map<int,vector<int>>m;
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]].push_back(i);
        mp[a[i]]++;
    }
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if(m[a[i]].size()>2){
            if(m[a[i]][0]==i){
                x+=n-m[a[i]][m[a[i]].size()-1];
                x+=m[a[i]][0]+1;
                x+=n*(m[a[i]].size()-2);
            }
        }
        else if(m[a[i]].size()==2){
            if(m[a[i]][0]==i){
                x+=m[a[i]][0]+1;
                x+=n-m[a[i]][1];
            }
        }
    }
    int y=0;
    int z=0;
    for (int i = 0; i < n; i++)
    {
        if(mp[a[i]]>1){
            z+=y;
            mp[a[i]]--;
        }
        if(m[a[i]].size()>1){
            if(m[a[i]][1]<=i){
                y++;
            }
        }
    }
    int ans=(n*(n+1))/2;
    ans+=z;
    ans-=x;
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
