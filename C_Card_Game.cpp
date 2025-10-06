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
const int M = 998244353;

void solve() {
    int n;
    cin>>n;
    int sum=0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]>0){
            sum+=a[i];
        }
    }
    if(n>1){
        if(a[0]<0&&a[1]>=0){
            sum-=min(a[1],-a[0]);
        }
    }
    cout<<sum<<endl;
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
}
