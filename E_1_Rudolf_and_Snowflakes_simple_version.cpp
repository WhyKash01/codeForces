#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
set<ll>s;
void solve()
{
    ll n;
    cin >> n;
    if(s.find(n)!=s.end()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    for (ll k = 2; k <= 1000; ++k) {
        ll val = 1 + k;
        ll p = k*k;
        for (int cnt = 2; cnt <= 20; ++cnt) {
            val += p;
            if (val > 1e6) break;
            s.insert(val);            
            p *= k;
        }
    }
    while (tc--)
        solve();
    return 0;
}