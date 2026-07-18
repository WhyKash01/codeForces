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
    int n,m,d;
    cin>>n>>m>>d;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int ans=0;
    int z=0;
    multiset<int>s;
    int prev=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]>0){
            if(s.size()<m){
                s.insert(a[i]);
                z+=a[i]-(i-prev+1)*d;
                prev=i+1;
                ans=max(ans,z);
            }
            else{
                if(*s.begin()<a[i]){
                    z+=a[i]-(i-prev+1)*d;
                    prev=i+1;
                    z-=*s.begin();
                    s.erase(s.begin());
                    s.insert(a[i]);
                    ans=max(ans,z);
                }
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