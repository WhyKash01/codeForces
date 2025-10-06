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

void solve(){
    int n;cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<pair<int,int>,int>ac;
    map<pair<int,int>,int>ab;
    map<pair<int,int>,int>bc;
    map<vector<int>,int>all;
    int ans=0;
    for (int i = 0; i < n-2; i++)
    {
        ans+=ac[{a[i],a[i+2]}];
        ans+=ab[{a[i],a[i+1]}];
        ans+=bc[{a[i+1],a[i+2]}];
        ans-=all[{a[i],a[i+1],a[i+2]}]*3;
        ac[{a[i],a[i+2]}]++;
        ab[{a[i],a[i+1]}]++;
        bc[{a[i+1],a[i+2]}]++;
        all[{a[i],a[i+1],a[i+2]}]++;
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
