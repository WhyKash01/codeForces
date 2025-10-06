#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    string s;
    cin >> s;
    ll cnt=0;
    for (int i = 0; i < s.size()-1; i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
        }
    }
    if(cnt==0){
        cout<<s.size()<<endl;
    }
    else{
        cout<<1<<endl;
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