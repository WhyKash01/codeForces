

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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll a[n + 1];
        a[0] = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                sum++;
            }
            else
            {
                sum--;
            }
            a[i + 1] = sum;
        }
        vector<ll> ans;
        for (int i = 0; i <= n; i++)
        {
            ll r = Ceil(n - i, 2), l = Floor(i, 2);
            if (a[i] <= 0 && sum - a[i] >= 0)
            {
                ans.push_back(i);
            }
        }
        ll x = n, Min = n;

        for (int i = 0; i < ans.size(); i++)
        {
            if (n % 2 == 0)
            {
                if (abs(n / 2 - ans[i]) <= Min)
                {
                    if(Min==abs(n / 2 - ans[i])){
                        continue;
                    }
                    Min = abs(n / 2 - ans[i]);

                    x = ans[i];
                }
            }
            else
            {
                double j = (double)n / 2;
                if (abs(j - ans[i]) <= Min)
                {
                    if(Min==abs(j - ans[i])){
                        continue;
                    }
                    Min = abs(n / 2 - ans[i]);
                    x = ans[i];
                }
            }
        }
        cout << x << endl;
    }
    return 0;
}