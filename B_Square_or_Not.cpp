
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
        ll n;
        cin >> n;
        string s;
        cin >> s;
        if (isPerfectSquare(n))
        {
            ll x = sqrt(n);
            x = x - 2;
            string a;
            bool ans = true;
            ll start = x + 2, end = x + 2;
            for (int i = 0; i < start; i++)
            {
                a.push_back('1');
            }
            int point = start;
            for (int i = 0; i < x; i++)
            {
                a.push_back('1');
                point++;
                for (int j = 0; j < x; j++)
                {
                    a.push_back('0');
                    point++;
                }
                a.push_back('1');
                point++;
            }
            for (int i = 0; i < end; i++)
            {
                a.push_back('1');
                point++;
            }
            if (s==a)
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
        else
        {
            cout << "No" << endl;
        }
        t--;
    }
}