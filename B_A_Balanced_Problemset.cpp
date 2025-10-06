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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,n;
        cin >> x >> n;
        int ans = 1;
        for(int i=1;i*i<=x;i++)
        {
            if(x%i==0)
            {
                if(n<=x/i)
                    ans=max(ans,i);
                if(n<=i)
                    ans=max(ans,x/i);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}