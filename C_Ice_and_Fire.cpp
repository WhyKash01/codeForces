#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    string s;cin>>s;
    ll e=0,o=0;
    for (int i = 0; i < n-1; i++)
    {
        if(s[i]=='1'){
            o=0;
            e++;
            cout<<i+2-e<<" ";
        }
        else{
            e=0;
            o++;
            cout<<i+2-o<<" ";
        }
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