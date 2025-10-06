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
    int a[n];
    int x=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        x+=a[i];
    }
    int ans=0;
    int y=0;
    int z=1;
    for (int i = 0; i < n; i++)
    {
        if(x-a[i]>=0){
            ans+=z*(y+a[i]);
            z++;
            y=0;
        }
        else{
            y+=a[i];
        }
        x-=a[i];
    }
    if(y!=0){
        ans+=z*(y);
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
