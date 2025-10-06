#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res=binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res*res;
    }
}
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for (int i = 1; i < n; i++)
        {
            a[i]=a[i]+a[i-1];
        }
        bool x=true;
        if(a[0]!=1){
                x=false;
            }
        for (int i = 1; i < n; i++)
        {
            if(a[i]>2*a[i-1]){
                x=false;
            }
        }
        if(x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}
