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
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> b(n - 1), a;
        for (int i = 0; i < n - 1; i++)
            cin >> b[i];
        a.emplace_back(b[0]);
        for (int i = 0; i < n - 2; i++)
        {
            a.emplace_back(min(b[i], b[i + 1]));
        }
        a.emplace_back(b[n - 2]);
        for (auto &i : a)
            cout << i << ' ';
        cout << "\n";
    }
}
