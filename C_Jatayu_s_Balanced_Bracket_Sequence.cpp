#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ans=0,curr=0;
    for (int i = 0; i < n*2; i++)
    {
        if(s[i]=='('){
            curr=0;
        }
        else{
            curr++;
            if(curr>1){
                ans++;
            }
        }
    }
    ans++;
    cout<<ans<<endl;
    
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