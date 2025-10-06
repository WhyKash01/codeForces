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
        ll n;
        cin>>n;
        set<ll>a;
        map<ll,ll>m;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            a.insert(x);
            m[x]++;
        }
        ll z=0,ans=0;
        for (auto i = a.begin(); i != a.end(); i++)
        {
            ans+=combination(m[*i],3);
            ans+=combination(m[*i],2)*z;
            z+=m[*i];
        }
        cout<<ans<<endl;
        
    }
    return 0;
}