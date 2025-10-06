#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    string s;
    cin>>s;
    ll cnt=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1'){
            cnt++;
        }        
    }
    cout<<cnt<<endl;
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