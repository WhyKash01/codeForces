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
    int a[m];
    int sum=0;
    int x=1;
    int cnt=0;
    for (int i = 0; i < m; i++)
    {
        cin>>a[i];
        if(a[i]>=(n+k-x)/k){
            a[i]=(n+k-x)/k;
            cnt++;
        }
        if(cnt==n%k){
            x=k;
        }
        sum+=a[i];
    }
    if(sum>=n){
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
    cin>>t;
    while (t--)
    {
        solve();
    }
}
