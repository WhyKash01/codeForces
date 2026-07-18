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
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i+1];
    }
    int ans=0;
    vector<int>pref(n+1,0);
    for (int i = 0; i < n; i++)
    {
        pref[i+1]=pref[i]+a[i+1];
    }

    for (int i = 1; i <= n; i++)
    {
        ans=max(ans,a[i]);
        int z=a[i];
        int x=1;
        for (int j = i+1; j <= n; j++)
        {
                int p=k;
                z=max(z,a[j-1]+x-1);
                int q=z-x;
                int req=(z*(z+1))/2-(q*(q+1))/2;
                req-=pref[j-1]-pref[i-1];
                if(p>req){
                    p-=req;
                    ans=max(ans,min(z+p/x,a[j]+x));
                }
            
            x++;
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