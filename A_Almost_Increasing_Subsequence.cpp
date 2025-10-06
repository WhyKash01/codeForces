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
    int n,q;
    cin>>n>>q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    for (int i = 0; i < n-2; i++)
    {
        if(a[i]>=a[i+1]&&a[i+1]>=a[i+2]){
            v.pb(i+2);
        }
    }
    for (int i = 0; i < q; i++)
    {
        int l,r;
        cin>>l>>r;
        int x=lower_bound(v.begin(),v.end(),r)-upper_bound(v.begin(),v.end(),l);
        if(r-l<2){
            cout<<r-l+1<<endl;
        }
        else{
            cout<<max(2LL,r-l+1-x)<<endl;
        }
    }
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    
    while (t--)
    {
        solve();
    }
}