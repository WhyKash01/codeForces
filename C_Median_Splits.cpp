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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int e=0,r=0;
    int x=0,y=0;
    int p=n,q=0;
    int s=0,t=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=k){
            e++;
            if(i==0){
                s--;
            }
            if(e>=s){
                if(x==0){
                    p=i;
                }
                x++;
                e=0;
            }
        }
        else{
            e--;
        }
    }
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]<=k){
            r++;
            if(i==n-1){
                t--;
            }
            if(r>=t){
                if(y==0){
                    q=i;
                }
                y++;
                r=0;
            }
        }
        else{
            r--;
        }
    }
    if(p<q||x>1||y>1){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
