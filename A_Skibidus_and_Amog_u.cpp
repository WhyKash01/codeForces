#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    string s;
    cin>>s;
    string z;
    for (int i = 0; i < s.size()-2; i++)
    {
        z.push_back(s[i]);
    }
    z.push_back('i');
    cout<<z<<endl;
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