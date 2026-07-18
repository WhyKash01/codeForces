#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int,pair<int,int>>
#define ppi pair<pair<int,int>,int>
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
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    int l=0,r=0;
    if(s[m-1]=='L'){
        r++;
    }
    else{
        l++;
    }
    for (int i = m; i <n ; i++)
    {
        if(s[i]=='L'){
            r++;
        }
    }
    for (int i = 0; i < m-1; i++)
    {
        if(s[i]=='R'){
            l++;
        }
    }
    cout<<min(l,r)<<endl;
    
    
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