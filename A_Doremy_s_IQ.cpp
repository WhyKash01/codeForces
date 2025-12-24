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

void solve() 
{
    int n,k;cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    int b[n];
    int x=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]<=x){
            b[i]=1;
        }
        else if(x<k){
            x++;
            b[i]=1;
        }
        else{
            b[i]=0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<b[i];
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
