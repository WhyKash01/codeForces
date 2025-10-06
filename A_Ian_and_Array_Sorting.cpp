#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll e=0,o=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(i%2==0){
            o+=a[i];
        }
        else{
            e+=a[i];
        }
    }
    if(n%2==0){
        if(e>=o){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        cout<<"YES\n";
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