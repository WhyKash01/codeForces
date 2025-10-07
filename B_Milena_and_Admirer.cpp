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
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int x=a[n-1];
    for (int i = n-2; i >= 0; i--)
    {
        if(a[i]>x){
            if(a[i]%x==0){
                ans+=a[i]/x-1;
            }
            else if(i>0){
                if(a[i]%x>=a[i-1]){
                    ans+=a[i]/x;
                    x=a[i]%x;
                }
                else{
                    ans+=a[i]/x;
                    x=a[i]/((a[i]/x)+1);
                }
            }
            else{
                ans+=a[i]/x;
            }
        }
        else{
            x=a[i];
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
