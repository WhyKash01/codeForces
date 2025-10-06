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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i<n; i++)
        cin >> a[i];
 
    for(int t=0; t<min(k,k%2+2); t++){
        int mex=0;
        vector<int> cnt(n+1);
        for(int i=0; i<n; i++)
            cnt[a[i]]++;
 
        for(int i=0; i<=n; i++)
            if(!cnt[i]){ mex=i; break; }
 
        for(int i=0; i<n; i++){
            if(cnt[a[i]]-1==0) a[i]=min(a[i],mex);
            else a[i]=mex;
        }
    }
 
    int ans=0;
    for(int i=0; i<n; i++)
        ans+=a[i];
    cout << ans << '\n';
    
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
