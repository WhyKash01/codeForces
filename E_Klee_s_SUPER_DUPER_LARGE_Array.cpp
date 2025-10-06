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
int M = 998244353;

void solve()
{
    int n,k;
    cin>>n>>k;
    int l=k,r=n+k-1;
    while(r-l>1){
        int mid=(r+l)/2;
        int x=((mid*(mid+1))/2)-((k*(k-1))/2);
        int y=(((n+k)*(n+k-1))/2)-((mid*(mid+1))/2);
        if(y>x){
            l=mid;
        }
        else{
            r=mid;
        }
    }
    int ans=LLONG_MAX;
    int e=abs(((((n+k)*(n+k-1))/2)-(l*(l+1))/2)-((l*(l+1))/2-(k*(k-1)/2)));
    int f=abs(((((n+k)*(n+k-1))/2)-(r*(r+1))/2)-((r*(r+1))/2-(k*(k-1)/2)));
    ans=min(e,f);
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
