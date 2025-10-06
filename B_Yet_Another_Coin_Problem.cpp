

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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[6] = {15, 10, 6, 3, 1, 0};
        ll ans = 0;
        ll f=0,m=0,l=0;
        
        for (int i = 0; i < 5; i++)
        {
            ll curr=n/a[i];
            if(i==0){
                f=n/a[i];
            }
            if(a[i]==1){
                l=n/a[i];
            }
            if(a[i]==6){
                m=n/a[i];
            }
            ans += curr;
            n = n % a[i];
            if (n == a[i + 1] * 2 - a[i]&&curr>0&&a[i]!=6)
            {
                ans += 1;
                break;
            }
        }
        if(l==2&&f>0&&m>0){
            ans--;
        }
        cout << ans << endl;
    }
    return 0;
}