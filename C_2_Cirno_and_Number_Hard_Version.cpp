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
int MOD = 1e9 + 7;

void solve()
{
    int a,n;
    cin>>a>>n;
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int ans=LLONG_MAX;
    int z=0;
    int a1=a;
    while(a>0){
        z++;
        a/=10;
    }
    int l=max(1LL,z-2);
    int r=z+2;
    for (int i = 0; i < n; i++)
    {
        int x=b[i];
        for (int j = l; j<= r ; j++)
        {
            ans=min(ans,abs(a1-x));
            x*=10;
            x+=b[i];
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