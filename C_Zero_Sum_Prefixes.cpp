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
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    int ans=0;
    bool f=false;
    int sum=0,Max=0;
    for (int i = 0; i < n; i++)
    {
        if(!f&&a[i]!=0){
            sum+=a[i];
            if(sum==0){
                ans++;
            }
        }
        if(a[i]==0){
            f=true;
            ans+=Max;
            Max=0;
            m.clear();
            sum=0;
        }
        if(f){
            sum+=a[i];
            m[sum]++;
            Max=max(m[sum],Max);
        }
    }
    
    if(f){
        ans+=Max;
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
