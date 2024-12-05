#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        ll sum = 0;
        if (n % 2 != 0)
        {
            sum = n / 2;
        }
        vector<ll> a;
        for (ll i = 0; i < n / 2; i++)
        {
            if (s[i] == 'R')
            {
                sum += n - i - 1;
            }
            else
            {
                sum += i;
                a.push_back(i);
            }
        }
        for (ll i = 0; i < n / 2; i++)
        {
            if (s[n - i - 1] == 'L')
            {
                sum += n - i - 1;
            }
            else
            {
                sum += i;
                a.push_back(i);
            }
        }
        sort(a.begin(), a.end());
        ll z = 0;
        for (ll i = 0; i < a.size(); i++)
        {
            z += a[i];
        }
        ll v[a.size()];
        ll q = 0;
        for (ll i = 0; i < a.size(); i++)
        {
            v[i] = q + n - 2 * a[i] - 1;
            q = v[i];
        }

        ll x = a.size(), c = 1;
        for (ll i = 0; i < n; i++)
        {
            ll ans = sum;
            if (a.size() > 0)
            {

                if (c < x)
                {
                    ans += v[i];
                }
                else
                {
                    ans += v[x - 1];
                }
            }
            cout << ans << " ";
            c++;
        }
        cout << endl;
    }
}