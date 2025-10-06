#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll N=1e6;
vector<ll> v(N,0);
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a==1||b==1){
        cout<<"YES"<<endl;
    }
    else if(a<=b){
        cout<<"NO"<<endl;
    }
    else{
        bool f=false;
        ll x=sqrt(a);
        ll len=min(b,a);
        for (int i = 2; i <= len; i++)
        {
            if(a%i==0){
                f=true;
                break;
            }
        }
        v[a]<=b?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    for (int d = 2; d * d < N; ++d) {
        if (v[d] == 0) {
            v[d] = d;
            for (int i = d * d; i < N; i += d) {
                if (v[i] == 0) {
                    v[i] = d;
                }
            }
        }
    }
    for (int i = 1; i < N; ++i) {
        if (v[i] == 0) {
            v[i] = i;
        }
    }
    while (tc--)
        solve();
    return 0;
}