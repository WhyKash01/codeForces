#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    string s1, s2;
    cin >> s1 >> s2;
    map<char, int> m1, m2;
    for (int i = 1; i < s1.size(); i++)
    {
        if (m1[s1[i]] == 0)
        {
            m1[s1[i]] = i;
        }
    }
    for (int i = 0; i < s2.size() - 1; i++)
    {
        m2[s2[i]] = s2.size() - i;
    }
    ll ans = LLONG_MAX;
    char c = '@';
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (m1[i] && m2[i])
        {
            if (m1[i] + m2[i] < ans)
            {
                ans = m1[i] + m2[i];
                c = i;
            }
        }
    }
    if (c == '@')
    {
        cout << -1 << endl;
    }
    else
    {
        for (int i = 0; i < m1[c]; i++)
        {
            cout << s1[i];
        }
        for (int i = s2.size() - m2[c]; i < s2.size(); i++)
        {
            cout << s2[i];
        }
        cout << endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}