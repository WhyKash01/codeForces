#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) * ((b) / std::__gcd(a, b)))
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
    int n;
    cin>>n;
    vector<vector<int>>v(n+1,vector<int>(n+1));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>v[i+1][j+1];
        }
    }
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    reverse(a.begin(),a.end());
    vector<int>v2;
    for (int k = 0; k < n; k++)
    {
        int ans=0;  
        for (int i = 0; i < n; i++)
        {
            int x=0;
            for (int j = 0; j < n ; j++)
            {
                if (v[a[i]][a[k]] + v[a[k]][a[j]] < v[a[i]][a[j]]) {
                    v[a[i]][a[j]] = v[a[i]][a[k]] + v[a[k]][a[j]];
                }
                if(j<=k){
                    x+=v[a[i]][a[j]];
                }
            }
            if(i<=k){
                ans+=x;
            }
        }
        v2.pb(ans);
    }
    for (int i = v2.size()-1; i >= 0; i--)
    {
        cout<<v2[i]<<" ";
    }
    
    cout<<endl;
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

    return 0;
}