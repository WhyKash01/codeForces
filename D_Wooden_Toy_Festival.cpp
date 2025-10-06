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
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    if(n<=3){
        cout<<0<<endl;
    }
    else{
        int ans=LLONG_MAX;
        for (int i = 0; i < n-2; i++)
        {
            int Max=(a[i]-a[0]+1)/2;
            int l=n-1,high=n-2,low=i+1;
            while(high-low>1){
                int mid=(high+low)/2;
                int x=(a[mid]-a[i+1]+1)/2;
                int y=(a[l]-a[mid+1]+1)/2;
                if(x>y){
                    high=mid;
                }
                else{
                    low=mid;
                }
            }
            int x1=(a[low]-a[i+1]+1)/2;
            int y1=(a[n-1]-a[low+1]+1)/2;
            int x2=(a[high]-a[i+1]+1)/2;
            int y2=(a[n-1]-a[high+1]+1)/2;
            int z=min(max(x1,y1),max(x2,y2));
            z=max(Max,z);
            ans=min(ans,z);
        }
        cout<<ans<<endl;
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
