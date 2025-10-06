#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
    }
}
ll Ceil(ll x, ll y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k, g;
		scanf ("%lld %lld %lld", &n, &k, &g);
 
		long long stolen = min((g - 1) / 2 * n, k * g);
		long long rest = (k * g - stolen) % g;
 
		if (rest > 0) {
		    stolen -= (g - 1) / 2;
		    long long last = ((g - 1) / 2 + rest) % g;
 
		    if (last * 2 < g) {
		        stolen += last;
		    } else {
		        stolen -= g - last;
		    }
		}
 
		cout<<stolen<<endl;
    }
}
