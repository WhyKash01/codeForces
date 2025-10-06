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
int M = 998244353;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int x=1,y=a[0];
    for (int i = 0; i < n; i++)
    {
        if(i<n-1){
            if(a[i]<a[i+1]){
                if((a[i+1]-a[i])*x<=k){
                    k-=(a[i+1]-a[i])*x;
                    y=a[i+1];
                    x++;
                }
                else{
                    y=a[i]+k/x;
                    x-=k%x;
                    break;
                }
            }
            else{
                x++;
            }
        }
        else{
            if(i==0){
                y+=k;
            }
            else if(i==n-1){
                if(a[i]==y){
                    y+=k/x;
                    x-=k%x;
                }
            }
        }
    }
    cout<<y*n-(n-1)+(n-x)<<endl;
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
