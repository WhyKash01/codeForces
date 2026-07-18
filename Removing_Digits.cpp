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
int INF = 1e9;
 
void solve()
{
    int n;
    cin>>n;
    vector<int> steps(n + 1);
    steps[0] = 0;
    for (int i = 1; i <= n; ++i) {
        steps[i] = INF;
        int number = i;
        while (number) {
            int digit = number % 10;
            steps[i] = min(steps[i], steps[i - digit] + 1);
            number /= 10;
        }
    }

    cout << steps[n] << "\n";
}
 
signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}