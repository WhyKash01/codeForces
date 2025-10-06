#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    int n;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	ll res = 0;
	vector<int> v;
	for (int i = 1; i <= n; i++) {
		if (a[i] >= i) {continue;}
		res += (ll)(lower_bound(v.begin(), v.end(), a[i]) - v.begin());
		v.push_back(i);
	}
	cout << res << '\n';
    
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}