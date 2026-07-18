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
    int n,q;
    cin>>n>>q;
    int a[q];
    for (int i = 0; i < q; i++)
    {
        cin>>a[i];
    }
    int prev=n-1;
    for (int i = 1; i <= n-1; i++)
    {
        cout<<i<<" "<<i+1<<endl;
    }
    for (int i = 0; i < q; i++)
    {
        if(prev==a[i]){
            cout<<"-1 -1 -1"<<endl;
        }
        else{
            cout<<n<<" "<<prev<<" "<<a[i]<<endl;
            prev=a[i];
        }
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