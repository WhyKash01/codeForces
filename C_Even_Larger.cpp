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
    int n;
    cin>>n;
    int a[n];
    int ans=0;
    
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            int x=LLONG_MAX,y=LLONG_MAX;
            if(i>0){
                x=a[i-1];
            }
            if(i<n-1){
                y=a[i+1];
            }
            int z=min(x,y);
            if(a[i]>z){
                
                ans+=a[i]-z;
                a[i]=z;
            }
        }
    }
    for (int i = 0; i < n; i+=2)
    {
        if(i+2<=n-1){
            if(a[i]+a[i+2]>a[i+1]){
                ans+=a[i]+a[i+2]-a[i+1];
                a[i+2]=max(0LL,a[i+2]-(a[i]+a[i+2]-a[i+1]));
            }
        }
    }
   
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
