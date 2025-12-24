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
int M = 1000000007;

void solve()
{
    int n;cin>>n;
    int a[n];
    int pref[n+1];
    pref[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        pref[i+1]=pref[i]+a[i];
    }
    int q;cin>>q;
    for (int i = 0; i < q; i++)
    {
        int l,u;
        cin>>l>>u;
        int z=pref[l-1]+u;
        auto x=upper_bound(pref+l+1,pref+n+1,z);
        auto y=upper_bound(pref+l+1,pref+n+1,z)-1;
        if(x==pref+n+1){
            cout<<y-pref<<" ";
        }
        else if(*x-z>z-*y){
            cout<<y-pref<<" ";
        }
        else{
            cout<<x-pref<<" ";
        }
    }
    cout<<endl;
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
