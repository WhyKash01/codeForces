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
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        ll l, r;
        cin >> l >> r;
        ll arr[l];
        for (int i = 0; i < l; i++)
        {
            cin >> arr[i];
        }
        vector<pair<char, pair<ll, ll>>> s;
        for (int i = 0; i < r; i++)
        {
            char a;
            ll b, c;
            cin >> a >> b >> c;
            s.push_back({a, {b, c}});
        }
        ll Max = arr[0];
        for (int i = 1; i < l; i++)
        {
            Max = max(Max, arr[i]);
        }
        for (int i = 0; i < r; i++)
        {
            if (s[i].second.first <= Max && s[i].second.second>=Max)
            {
                if (s[i].first == '+')
                {
                    Max++;
                }
                else
                {
                    Max--;
                }
            }
            cout << Max << " ";
        }
        cout << endl;
        t--;
    }
}