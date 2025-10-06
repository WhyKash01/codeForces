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
    int b[n];
    map<int,int>a;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>a[b[i]];
    }
    int m;cin>>m;
    int c[m];
    for (int i = 0; i < m; i++)
    {
        cin>>c[i];
    }
    bool z=true;
    int ans=0;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin>>x;
        if(a[c[i]]<x){
            z=false;
            break;
        }
        a[c[i]]-=x;
    }
    for(auto i:a){
        if(i.second){
            ans++;
        }
    }
    if(z){
        int k=1;
        for (int i = 1; i <= ans; i++)
        {
            k=((k%M)*2)%M;
        }
        cout<<k<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return;
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
