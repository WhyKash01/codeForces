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
    int n;
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    vector<vector<int>> v;

    for (int i = n; i >= 1; i--)
    {
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(i);
        for (int j = 1; j <= n; j++)
        {
            v1.push_back(j);
        }
        v.push_back(v1);
        vector<int> v2;
        v2.push_back(2);
        v2.push_back(i);
        for (int j = 1; j <= n; j++)
        {
            v2.push_back(j);
        }
        v.push_back(v2);
    }
    int ans=0;
    for (int i = 1; i <= n; i++)
    {
        ans+=(i*2-1)*i;
    }
    
    cout<<ans<<" "<<v.size()<<endl;
    for (auto x:v)
    {
        for (auto y:x)
        {
            cout<<y<<" ";
        }
        cout<<endl;
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
