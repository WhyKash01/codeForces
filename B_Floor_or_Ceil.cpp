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
int F(int x,int n){
	while (n --){
		if (!x) return x;
		x = (x >> 1);
	}
	return x;
}
int C(int x,int n){
	while (n --){
		if (x <= 1) return x;
		x = ((x + 1) >> 1);
	}
	return x;
}
void solve()
{
    int x, n, m;
    cin >> x >> n >> m;
    cout << F(C(x,m),n) << " " << C(F(x,n),m) << endl;
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
