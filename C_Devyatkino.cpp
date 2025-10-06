#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll x=0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]-'0'<8){
            x=max(x,(s[i]-'0')*1LL);
        }
    }
    for (int i = s.size()-1; i >=0; i--)
    {
        
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