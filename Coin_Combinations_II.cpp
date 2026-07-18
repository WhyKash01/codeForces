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
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>c(x+1,0);
    c[0]=1;
    int z=1e9+7;
    sort(a,a+n);
    for (int j = 0; j < n; j++)
    {
        for (int i = 1; i <= x; i++)
        {
            if(i>=a[j]){
                c[i]=(c[i]+c[i-a[j]])%z;
            }
        }
    }
    cout<<c[x]%z<<endl;
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