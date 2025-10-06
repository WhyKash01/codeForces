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
    ll ans=0;
    bool f=false;
    char last;
    for (int i = 0; i < n; i++)
    {
        if(!f&&s[i]=='1'){
            f=true;
            last='1';
            ans++;
        }
        else{
            if(f&&last!=s[i]){
                last=s[i];
                ans++;
            }
        }
    }
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