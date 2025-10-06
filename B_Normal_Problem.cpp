#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    string s;
    cin >> s;
    for (int i = s.size()-1; i >= 0; i--)
    {
        if (s[i] == 'q')
        {
            s[i] = 'p';
        }
        else if (s[i] == 'p')
        {
            s[i] = 'q';
        }
        cout<<s[i];
    }
    cout<<endl;
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