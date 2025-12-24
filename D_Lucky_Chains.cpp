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
#define sz(a) int((a).size())

typedef long long li;

const int INF = 1e9;
const int N = 1e7 + 5;

int mind[N];

void precalc() {
	rep (i, 0, N)
		mind[i] = i;
	
	for (int p = 2; p < N; p++) {
		if (mind[p] != p)
			continue;
		for (int d = 2 * p; d < N; d += p)
			mind[d] = min(mind[d], p);
	}
}
vector<int> getPrimes(int v) {
	vector<int> ps;
	while (v > 1) {
		if (ps.empty() || ps.back() != mind[v])
			ps.push_back(mind[v]);
		v /= mind[v];
	}
	return ps;
}
void solve() 
{
    int n;cin>>n;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        int z=y-x;
        if(z==1){
            cout<<-1<<endl;
            continue;
        }
        int r=INF;
        for (int p : getPrimes(z)){
            r = min(r, ((x + p - 1) / p) * p);
        }
	    cout << r - x << '\n';
    }
    
}
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    precalc();
    while (t--)
    {
        solve();
    }
}
