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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    map<int,int>m;
    int curr=0,Max=0;
    for (int i = 0; i < n; i++)
    {
        if(Max<a[i]||curr>a[i]-1){
            curr=a[i];
            Max=a[i]+1;
            int x=n-i;
            int z=i+1;
            ans+=x*z;
            m[a[i]]=i+1;
        }
        else{
            int x=n-i;
            int z=i+1-m[a[i]-1];
            m[a[i]]=i+1;
            ans+=x*z;
            Max=a[i]+1;
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