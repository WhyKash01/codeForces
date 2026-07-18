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
    int n,m,k,d;
    cin>>n>>m>>k>>d;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    int c[n+1];
    c[0]=0;
    for (int i = 0; i < n; i++)
    {
        multiset<int>m2;
        m2.insert(1);
        int ans;
        int b[m];
        b[0]=1;
        for (int j = 1; j < m; j++)
        {
            int x=a[i][j]+*m2.begin()+1;
            m2.insert(x);
            b[j]=x;
            if(j>d){
                m2.erase(m2.find(b[j-d-1]));
            }    
            if(j==m-1){
                ans=x;
            }
        }
        c[i+1]=ans+c[i];
    }
    int ans=LLONG_MAX;
    for (int i = k; i <= n; i++)
    {
        ans=min(ans,c[i]-c[i-k]);
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
