

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
        ll x, y, z, k;
        cin >> x >> y >> z >> k;
        vector<ll> v;
        for (int i = 1; i <= max({x, y, z}); i++)
        {
            if (k % i == 0)
            {
                v.push_back(i);
            }
        }

        vector<vector<ll>> gg;
        for (int i = 0; i < v.size(); i++)
        {
            ll area = k / v[i];
            for (int j = 0; j < v.size(); j++)
            {
                vector<ll> side(3);
                if (area % v[j] == 0)
                {
                    ll h = area / v[j];
                    side[0] = h;
                    side[1] = v[j];
                    side[2] = v[i];
                    sort(side.begin(), side.end());
                    gg.push_back(side);
                }
            }
        }

        ll b[3];
        b[0] = x, b[1] = y, b[2] = z;
        sort(b, b + 3);
        set<ll> w;
        ll ans = 0;
        for (int i = 0; i < gg.size(); i++)
        {
            if (gg[i][0] <= b[0] && gg[i][1] <= b[1] && gg[i][2] <= b[2])
            {
                ans = max(ans, (b[0] - gg[i][0] + 1) * (b[1] - gg[i][1] + 1) * (b[2] - gg[i][2] + 1));
                w.insert((b[0] - gg[i][0] + 1) * (b[1] - gg[i][1] + 1) * (b[2] - gg[i][2] + 1));
            }
        }
        if (w.size() == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
