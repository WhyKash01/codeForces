#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans=false;
    for (int i = 0; i < n-1; i++)
    {
        ll x=a[i],y=a[i+1];
        if(x>y){
            swap(x,y);
        }
        if(2*x>y){
            ans=true;
            break;
        }
    }
    ans?cout<<"Yes\n":cout<<"No\n";
    
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