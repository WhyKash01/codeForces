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
    int n, k; cin >> n >> k;
    
    vector <int> a(n);
    for (auto &x : a) cin >> x;
    
    int sum = accumulate(a.begin(), a.end(), 0LL);
    
    int mx = *max_element(a.begin(), a.end());
    for (int sz = n; sz >= 1; sz--){ 
        int need = sum % sz;
        if (need){
            need = sz - need;
        }
        if (need > k){
            continue;
        }
        
        int tot = sum + need;
        int kk = k - need;
        int add = kk / sz;
        tot += add * sz;
        if ((tot / sz) < mx){
            continue;
        }
        
        cout << sz << "\n";
        return;
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
