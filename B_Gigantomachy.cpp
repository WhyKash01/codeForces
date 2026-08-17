#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int inf = LLONG_MAX;
void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int b[m];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int cnt1=a[n-1];
    int cnt2=b[m-1];
    for (int i = 0; i <n-1; i++)
    {
        cnt1+=a[i]-a[i+1]+1;
    }
    for (int i = 0; i < m-1; i++)
    {
        cnt2+=b[i]-b[i+1]+1;
    }
    if(cnt1<cnt2){
        cout<<2<<endl;
    }
    else{
        cout<<1<<endl;
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