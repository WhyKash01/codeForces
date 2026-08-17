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

void solve()
{
    int n,m;
    cin>>n>>m;
    string s,t;
    cin>>s>>t;
    if(s[0]!=s[n-1]&&t[0]!=t[m-1]&&((s[0]=='>'&&t[0]=='^')||s[0]=='<'&&t[0]=='v')){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}   

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}