

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
        ll x,y,k;
        cin>>x>>y>>k;
	    while (k > 0 && x != 1) {
		    ll rem = (x / y + 1) * y - x;
                rem = max(1ll, rem);
                rem = min(rem, k);
                x += rem;
		    while (x % y == 0) {
			    x /= y;
		    }
		    k -= rem;
	    }
	    cout << x + k % (y - 1) << endl;
    }
    return 0;
}