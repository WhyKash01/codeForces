#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return (a * res * res)%M;
    }
    else
    {
        return (res * res)%M;
    }
}
int main()
{
    int t;
    cin >> t;
    int a[t],b[t];
    for (int i = 0; i < t; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < t; i++)
    {
        cin>>b[i];
    }
    for (int i = 0; i < t; i++)
    {
        ll ans=binaryExpo(2,b[i])%M;
        cout<<ans<<endl;
    }
    
}