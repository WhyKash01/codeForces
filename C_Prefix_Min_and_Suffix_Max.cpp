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
    int n;
    cin>>n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[i]=0;
    }
    int x=LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<x){
            x=a[i];
            b[i]=1;
        }
    }
    x=LLONG_MIN;
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]>x){
            x=a[i];
            b[i]=1;
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
