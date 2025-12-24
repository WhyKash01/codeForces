#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
#define int64_t long long
#define pii pair<int64_t, int64_t>
#define fr first
#define sc second
#define vi vector<int64_t>
#define vvi vector<vector<int64_t>>
#define vpii vector<pair<int64_t, int64_t>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int64_t i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()

void solve() 
{
    int n,x,k;cin>>n>>x>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int z=a+n-upper_bound(a,a+n,x+(k*100));
    if(z<=k){
        cout<<1<<endl;
    }
    else{
        cout<<z-k+1<<endl;
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
