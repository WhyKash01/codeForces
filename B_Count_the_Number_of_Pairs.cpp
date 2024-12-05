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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        unordered_map<char, pair<int, int>> m;
        set<char> all;
        for (int i = 0; i < n; i++)
        {
            if (s[i] - '0' < 49)
            {
                m[char(s[i] + 32)].first++;
                all.insert(char(s[i] + 32));
            }
            else
            {
                all.insert(s[i]);
                m[s[i]].second++;
            }
        }
        int x = 0;
        for (auto i = all.begin(); i != all.end(); i++)
        {
            if(k<=0){
                break;
            }
            int c = abs(m[(*i)].first - m[(*i)].second)/2;
            if (k <= c)
            {
                x += k;
                break;
            }
            else
            {
                x += c;
                k -= c;
            }
        }
        for (auto i = all.begin(); i != all.end(); i++)
        {
            x+=min(m[(*i)].first,m[(*i)].second);
        }
        cout << x << endl;
    }
}
