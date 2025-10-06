#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}
ll combination(ll n, ll m) {
    if (m > n) return 0;
    if (m == 0 || m == n) return 1;
    if (m > n - m) m = n - m;
    ll result = 1;
    for (ll i = 0; i < m; i++) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}
vector<int> pc(200001,0);
vector<int> ps(200001,0);
void solve() {
    int n;
    cin >> n;
    cout<<ps[n]<<"\n";
}
 
signed main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    for(int i = 1 ; i <= 200000; i++)  {
        int sum = 0;
        for(int j = 1 ; j<= i ; j*=10) {
            int dig = ((i/j)%10);
            sum+=dig;
        }
        pc[i] = sum;
    }
    // ps[0] = 1;
    for(int i = 1 ; i <= 200000; i++) {
        ps[i] = ps[i-1] + pc[i];
    }
 
    int t = 1;
    cin >> t;
    while(t--) solve();
    return 0;
}