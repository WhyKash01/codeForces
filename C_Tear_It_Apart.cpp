#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    string s;
    cin>>s;
    map<char,ll>m,l;
    set<char>c;
    for (int i = 0; i < s.size(); i++)
    {
        c.insert(s[i]);
        m[s[i]]=max(i-l[s[i]],m[s[i]]);
        l[s[i]]=i+1;    
    }
    ll Min=LLONG_MAX;
    for(auto i:c){
        ll x=s.size();
        m[i]=max(x-0LL-l[i],m[i]);
        Min=min(Min,m[i]);
    }
    ll ans=0;
    for (int i = 0; i < 32; i++)
    {
        if(Min&1<<i){
            ans=i+1;
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