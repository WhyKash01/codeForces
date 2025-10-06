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

void solve()
{
    int n;
    cin>>n;
    int a[n];
    int Max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    map<int,int>m;
    m[0]=1;
    int ans=0;
    int x=0;
    int l=1<<8;
    for (int i = 0; i < n; i++)
    {
        x=x^a[i];
        for (int j = 0; j <= l; j++)
        {
            if(m[j]){
                ans=max(ans,j^x);
            }
        }
        m[x]=1;
    }
    cout<<ans<<endl;
    
    return;
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
