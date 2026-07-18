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
#define N 200001
 
int a[N], l[N], r[N];
int pref[N];
int c[N];
 
bool check(int n, int m, int f){
    for (int i = 0; i <= n; i++) a[i] = pref[i] = 0;
    for (int i = 0; i < f; i++){
        a[c[i]] = 1;
    }
    for (int i = 1; i <= n; i++) pref[i] = pref[i - 1] + a[i];
    for (int i = 0; i < m; i++){
        int c1 = pref[r[i]] - pref[l[i] - 1];
        if (c1 > r[i] - (l[i] - 1) - c1) return true;
    }
    return false;
}
 
void solve(){
    int n, m; cin >> n >> m;
    for (int i = 0; i <= n; i++) pref[i] = a[i] = 0;
    for (int i = 0; i < m; i++){
        cin >> l[i] >> r[i];
    }
    int q; cin >> q;
    for (int i = 0; i < q; i++){
        cin >> c[i];
    }
    int left = 0, right = q + 1;
    while (left != right - 1){
        int mid = (left + right) / 2;
        if (check(n, m, mid)) right = mid;
        else left = mid;
    }
    int ans = (right == q + 1 ? -1 : right);
    cout << ans << endl;
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