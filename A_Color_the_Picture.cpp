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
int M = 1000000007;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int a[k];
    for (int i = 0; i < k; i++)
    {
        cin>>a[i];
    }
    int x=0,y=0;
    bool f=false;
    for (int i = 0; i < k; i++)
    {
        if(m==1){
            break;
        }
        if(a[i]/n>=2){
            if(y+a[i]/n+x>=m){
                f=true;
            }
            else{
                if(m-(x)==3){
                    continue;
                }
                x+=2;
                y+=a[i]/n-2;
            }
        }
    }
    x=0,y=0;
    for (int i = 0; i < k; i++)
    {
        if(n==1){
            break;
        }
        if(a[i]/m>=2){
            if(y+a[i]/m+x>=n){
                f=true;
            }
            else{
                if(n-(x)==3){
                    continue;
                }
                x+=2;
                y+=a[i]/m-2;
            }
        }
    }
    (f)?cout<<"Yes\n":cout<<"No\n";
    
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
