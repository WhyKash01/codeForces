
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool isPrime(int n)
{
    if (n <= 1)
        return false;

    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;

    return true;
}
bool isPerfectSquare(long long x)
{
    if (x >= 0)
    {

        long long sr = sqrt(x);

        return (sr * sr == x);
    }
    return false;
}
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ll l, r;
        cin >> l >> r;
        vector<ll> a;
        ll s = l;
        ll count = 0;
        while (s <= r)
        {
            s = s + count;
            a.push_back(s);
            count++;
        }

        cout << a.size()-1 << endl;

        t--;
    }
}