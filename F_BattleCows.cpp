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
 
void solve(){
    int n,m;
    cin>>n>>m;
    int l=pow(2,n);
    int a[l];
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    map<pair<int,int>,int>p;
    for(int i=0;i<n;i++){
        int x=pow(2,i);
        for (int j = 0; j < l; j+=x)
        {
            if(x==1){
                p[{j+1,j+1}]=a[j];
            }
            else{
                p[{j+1,j+x}]=p[{j+1,j+x/2}]^p[{j+x/2+1,j+x}];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        int ans=0;
        int x,y;
        cin>>x>>y;
        int e=x;
        for (int j = 0; j <n ; j++)
        {
            int z=pow(2,j);
            if((x-1)%(z*2)==0){
                int k=p[{x,x+z-1}]^a[e-1]^y;
                if(k<p[{x+z,x+z*2-1}]){
                    ans+=z;
                }
            }
            else{
                int k=p[{x,x+z-1}]^a[e-1]^y;
                x=x-z;
                if(k<=p[{x,x+z-1}]){
                    ans+=z;
                }
            }
        }
        
        cout<<ans<<endl;
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