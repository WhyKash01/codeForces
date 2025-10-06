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
    int n,s;
    cin>>n>>s;
    int a[n][4];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i][2]==a[i][3]){
            if(s==2*a[i][2]){
                ans++;
            }
            else if(a[i][0]==a[i][1]){
                ans++;
            }
        }
        else if(a[i][2]==(s-a[i][3])){
            if(a[i][0]!=a[i][1]){
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
