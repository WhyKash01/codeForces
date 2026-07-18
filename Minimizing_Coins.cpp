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
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>c(x+1,-1);
    c[0]=0;
    sort(a,a+n);
    for (int i = 1; i <= x; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i<a[j]){
                break;
            }
            if(c[i-a[j]]>=0){
                if(c[i]==-1){
                    c[i]=c[i-a[j]]+1;
                }
                else{
                    c[i]=min(c[i],c[i-a[j]]+1);
                }
            }
        }
    }
    cout<<c[x]<<endl;

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
