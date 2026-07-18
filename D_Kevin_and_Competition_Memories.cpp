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
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int x=a[0];
    sort(a,a+n);
    for (int i = 0; i < m; i++)
    {
        if(b[i]<=x){
            v.push_back(1);
        }
        else{
            int z=(a+n)-lower_bound(a,a+n,b[i]);
            v.push_back(z+1);
        }
    }
    sort(v.begin(),v.end());
    for (int i = 0; i < m; i++)
    {
        int ans=0;
        for (int j = i; j < m; j+=(i+1))
        {
            ans+=v[j];
        }
        cout<<ans<<" ";
    }
    cout<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
