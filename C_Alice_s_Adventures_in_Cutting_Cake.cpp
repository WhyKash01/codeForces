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
    int n, m; cin >> n >> m;
		int v; cin >> v;
		vector<int> a(n);
		rep(i,0,n) cin >> a[i];
 
		vector<int> sums(n + 1);
		rep(i,0,n) sums[i + 1] = sums[i] + a[i];
 
		auto query = [&](int i, int j) { // [i, j)
			return sums[j] - sums[i];
		};
 
		auto compute_pfx = [&]() -> vector<int> {
			vector<int> pfx(n + 1, 0);
			int end = 0, val = 0;
			int sum = 0;
			for (int start = 0; start < n; start++) {
				while (end < n && sum < v) {
					sum += a[end];
					++end;
					pfx[end] = max(pfx[end], pfx[end - 1]);
				}
				if (sum >= v) {
					pfx[end] = 1 + pfx[start];
				}
				sum -= a[start];
			}
			rep(i,1,n+1) {
				pfx[i] = max(pfx[i], pfx[i - 1]);
			}
			return pfx;
		};
 
		auto pfx = compute_pfx();
		reverse(all(a));
		auto sfx = compute_pfx();
		reverse(all(a));
		reverse(all(sfx));
 
		if (pfx[n] < m) {
			cout << "-1\n";
			return;
		}
 
		int end = 0;
		int ans = 0;
		for (int start = 0; start < n; start++) {
			while (end < n && pfx[start] + sfx[end + 1] >= m) ++end;
			if (pfx[start] + sfx[end] >= m)
				ans = max(ans, query(start, end));
		}
		cout << ans << "\n";
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
