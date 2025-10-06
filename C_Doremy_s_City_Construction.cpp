#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
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
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x=0,y=0;
    for (int i = 0; i < n/2; i++)
    {
        if(a[i]!=a[i+1])
        x=i+1;
    }
    for (int i = n-1; i >= n/2; i--)
    {
        if(a[i]!=a[i-1]){
            y=n-i;
        }
    }
    int z=max(x,y);
    if(z==0){
        cout<<n/2<<endl;
    }
    else{
        cout<<z*(n-z)<<endl;
    }
    return;
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
