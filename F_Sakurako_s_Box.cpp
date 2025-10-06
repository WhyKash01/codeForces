#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()

int M=1e9+7;
int power(int x, int y, int p) {
    int res = 1; 
    x = x % p; 

    while (y > 0) {
        if (y & 1)
            res = (res * x) % p;

        y = y >> 1; 
        x = (x * x) % p; 
    }
    return res;
}
void solve()
{
    int n;
        cin >> n;
        vi a(n);
        int sum = 0, sq = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum = (sum + a[i]) % M;
            sq = (sq + a[i] * a[i]) % M;
        }
        int p = (n * (n - 1) / 2) % M;
        int ans = ((sum * sum - sq) % M + M) % M;
        ans = (ans * power(2, M - 2, M)) % M;
        int result = (ans * power(p, M - 2, M)) % M;
        cout << result << endl;
        return;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


