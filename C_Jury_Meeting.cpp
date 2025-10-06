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
    int n;cin>>n;
    int a[n];
    map<int,int>m;
    int Max=LLONG_MIN;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
        Max=max(Max,a[i]);
    }
    int ans=1,sub=1;
    for (int i = 1; i <= n; i++)
    {
        ans=ans*i%M;
        if(i!=m[Max-1]+1){
            sub=sub*i%M;
        }
    }
    if(m[Max]==1){
        ans=(ans-sub+M)%M;
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
