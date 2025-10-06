#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll b[31]={0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 31; j++)
        {
            ll z=powl(2,j);
            if(a[i]&z){
                b[j]++;
            }
        }
    }
    ll it=-1;
    ll ans1=0;
    for (int i = 30; i >= 0; i--)
    {
        if(n<=k+b[i]){
            ll z=powl(2,i);
            ans1|=z;
            k-=n-b[i];
        }
    }
    
    cout<<ans1<<endl;


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