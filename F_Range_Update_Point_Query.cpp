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
int digit_sum(int n) {
    int ret = 0;
    while(n) {
        ret += n % 10;
        n /= 10;
    }
    return ret;
}
void solve()
{
    int n, q; cin >> n >> q;
    vector<int> a(n);
    set<int> s;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] > 9) s.insert(i);
    }
    while(q--) {
        int type; cin >> type;
        if(type == 1) {
            int l, r; cin >> l >> r; --l, --r;
            int lst = l;
            while(!s.empty()) {
                auto it = s.lower_bound(lst);
                if(it == s.end() || *it > r) break;
                a[*it] = digit_sum(a[*it]);
                int paiu = *it;
                s.erase(it);
                if(a[paiu] > 9) s.insert(paiu);
                lst = paiu + 1;
            }
        } else {
            int x; cin >> x; --x;
            cout << a[x] << "\n";
        }
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
