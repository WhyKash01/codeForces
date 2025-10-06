
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
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
        ll n, a, b, c;
        cin>>n>> a>> b>> c;
        ll lo = 0;
        ll hi = n+1;
  
        while (hi - lo > 1)
        {
            ll mid = (lo + hi) >> 1;
    
        if ((mid+2)/3*a + (mid+1)/3*b + mid/3*c < n)
            lo = mid;
        else
            hi = mid;
        }
        cout << hi << '\n';
    }
    return 0;
}