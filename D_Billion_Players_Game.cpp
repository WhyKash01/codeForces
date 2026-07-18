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
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int i=0,j=n-1;
    int ans=0;
    sort(a,a+n);
    while(i<j){
        if(a[i]>=r){
            ans+=a[i]-r+a[j]-r;
        }
        else if(a[j]<=l){
            ans+=l-a[j]+l-a[i];
        }
        else{
            ans+=a[j]-a[i];
        }
        i++;
        j--;
    }
    if(i==j){
        if(a[j]>r){
            ans+=a[j]-r;
        }
        else if(a[i]<l){
            ans+=l-a[i];
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
