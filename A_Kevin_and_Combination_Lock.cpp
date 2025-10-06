#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
bool is_pos(string s)
{
    int con = stoll(s);
    if (con % 33 == 0)
    {
        return true;
    }
    int x = s.length();
    for (int i = 0; i < x - 1; i++)
    {
        if (s[i] == '3' && s[i + 1] == '3')
        {
            string t = "";
            for (int j = 0; j < x; j++)
            {
                if (j != i && j != (i + 1))
                {
                    t.push_back(s[j]);
                }
            }
            if (is_pos(t))
            {
                return true;
            }
        }
    }
    return false;
};
void solve()
{
    string s;
    cin >> s;
    if (is_pos(s))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}