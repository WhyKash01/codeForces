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
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int x=2;
            double z=a[j]-a[i];
            double k=j-i;
            double x1=z/k;
            int z1=1;
            for (int l = j+1; l < n; l++)
            {
                
                if(a[l]==a[j]+(x1*z1)){
                    x++;
                }
                z1++;
            }
            z1=1;
            for (int l1 = i-1; l1 >= 0; l1--)
            {
                if(a[l1]==a[i]-(x1*z1)){
                    x++;
                }
                z1++;
            }
            
            ans=max(ans,x);
        }
    }
    cout<<n-ans<<endl;
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
