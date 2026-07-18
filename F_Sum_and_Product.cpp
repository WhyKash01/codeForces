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
    cin>>n;
    int a[n];
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int x,y;
        cin>>x>>y;
        int z=sqrtl(x*x-4*y);
        if(z*z==x*x-4*y){
            int p1=x+z,p2=x-z;
            if(p1%2==0&&p2%2==0){
                if(p1==p2){
                    cout<<(m[p1/2]*(m[p1/2]-1))/2<<" ";
                }
                else{
                    cout<<m[p1/2]*m[p2/2]<<" ";
                }
            }
            else{
                cout<<0<<" ";
            }
        }
        else{
            cout<<"0 ";
        }
    }
    cout<<endl;
    
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