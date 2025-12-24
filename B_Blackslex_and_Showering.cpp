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

void solve() 
{
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n-1; i++)
    {
        sum+=abs(a[i]-a[i+1]);
    }
    int ans=sum;
    for (int i = 0; i < n; i++)
    {
        int x=0;
        if(i==0){
            x+=abs(a[i]-a[i+1]);
        }
        else if(i==n-1){
            x+=abs(a[i]-a[i-1]);
        }
        else{
            x+=abs(a[i]-a[i+1])+abs(a[i]-a[i-1]);
            x-=abs(a[i-1]-a[i+1]);
        }
        ans=min(ans,sum-x);
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
