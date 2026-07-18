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
int MOD = 676767677;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    int c[n];
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            int x=__gcd(a[i],a[i+1]);
            c[i+1]=x;
            if(x!=a[i]){
                ans++;
            }
        }
        else if(i<n-1){
            int z=__gcd(a[i],a[i+1]);
            c[i+1]=z;
            int l=LCM(c[i],z);
            if(l<a[i]){
                ans++;
            }
        }
        else{
            if(c[i]!=a[i]){
                ans++;
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