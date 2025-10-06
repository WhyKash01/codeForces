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
    int n,k;
    cin>>n>>k;
    int ans=-1;
    for(int i=0;i<61;i++){
        int x=1ll<<i;
        if(x>n){
            break;
        }
        if((n-x)%k==0){
            int y=(n-x)/k;
            int b=y/x;
            int c=y%x;
            int f = __builtin_popcountll(c);
            int z=i+b+f;
            if(ans==-1){
                ans=z;
            }
            if(z<ans){
                ans=z;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}