#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    ll b[n+1];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        b[a[i]]=i;
    }
    ll cnt=0;
    for (int i = 0; i < n; i++)
    {
        if(b[i+1]+1!=a[i]){
            ll x=b[b[i+1]+1];
            b[a[i]]=x;
            b[a[x]]=i;
            swap(a[i],a[x]);
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