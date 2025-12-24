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
    int n;
    cin >> n;
    vector<int> p(n+1), pre(n+1, n);
    vector<pair<int, int>> suf(n+2);
    for(int i=1; i<=n; i++){
        cin >> p[i];
        pre[i] = min(pre[i-1], p[i]);
    }
    for(int i=n; i>=1; i--){
        suf[i] = max(suf[i+1], {p[i], i});
    }

    for(int i=2; i<=n; i++){
        if(pre[i-1] > suf[i].first){
            cout << "No" << '\n';
            return;
        }
    }
    cout << "Yes" << '\n';
    for(int l=1; l<=n;){
        int r = suf[l].second;
        for(int i=l; i<r; i++)
            cout << p[i] << ' ' << p[r] << '\n';
        if(l > 1)
            cout << pre[l-1] << ' ' << p[r] << '\n';
        l = r+1;
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
