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
int M = 1e9+7;

void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i+1];
    }
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        int curr=a[i];
        for (int j = 1; j <=curr; j++)
        {
            int k=i+curr*j;
            if(k<=n){
                if(a[i]*a[k]==k-i){
                    ans++;
                }
            }
            else{
                break;
            }
        }
        for (int j = 1; j < curr; j++)
        {
            int k=i-curr*j;
            if(k>0){
                if(a[k]*a[i]==i-k){
                    ans++;
                }
            }
            else{
                break;
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
