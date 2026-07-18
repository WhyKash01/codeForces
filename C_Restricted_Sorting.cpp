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
    int a[n],b[n];
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=a[i];
        if(i!=0){
            if(a[i]<a[i-1]){
                f=false;
            }
        }
    }
    if(f){
        cout<<-1<<endl;
    }
    else{
        
        sort(a,a+n);
        int x=a[0],y=a[n-1];
        int ans=1e9+7;
        for (int i = 0; i < n; i++)
        {
            if(a[i]!=b[i]){
                int z=max(abs(a[i]-x),abs(a[i]-y));
                ans=min(ans,z);
            }
        }
        cout<<ans<<endl;
    }
    
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
