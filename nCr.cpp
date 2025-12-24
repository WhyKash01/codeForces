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
int64_t M = 1e9+7;
const int64_t N=2e5+20;
int64_t fac[N];
int64_t pw(int64_t a,int64_t b){
    int64_t r=1;
    while(b>0){
        if(b&1)r=(r*a)%M;
        b/=2;
        a=(a*a)%M;
    }
    return r;
}
int64_t nCr(int64_t n, int64_t r) {
    if(n<r)return 0LL;
    return (fac[n]*pw((fac[n-r]*fac[r])%M,M-2))%M;
}
void solve() 
{
    int64_t n,k;cin>>n>>k;
    int64_t req=k/2+1;
    int64_t x=0,y=0;
    for (int64_t i = 0; i < n; i++)
    {
        int64_t z;cin>>z;
        if(z){
            x++;
        }
        else{
            y++;
        }
    }
    
    int64_t ans=0;
    for(int cnt_ones = k / 2 + 1; cnt_ones <= min(x, k); ++cnt_ones) {
			ans += nCr(x, cnt_ones) * nCr(n - x, k - cnt_ones) % M;
			ans %= M;
		}
    cout<<ans<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int64_t t = 1;
    cin >> t;
    fac[0]=1;
    for (int64_t i = 1; i < N; i++)
    {
        fac[i]=(i*fac[i-1])%M;
    }
    while (t--)
    {
        solve();
    }
}
