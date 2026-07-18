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
    int n,k;
    cin>>n>>k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>k;
    int x=0,y=0;
    int curr=a[k-1];
    for (int i = k; i < n; i++)
    {
        if(curr!=a[i]){
            curr=(curr+1)%2;
            x++;
        }
    }
    if(curr!=a[k-1]){
        x++;
        curr=a[k-1];
    }
    for (int i = k-2; i >=0 ; i--)
    {
        if(curr!=a[i]){
            curr=(curr+1)%2;
            y++;
        }
    }
    if(curr!=a[k-1]){
        y++;
    }
    cout<<max(x,y)<<endl;
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