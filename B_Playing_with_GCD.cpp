#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
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
        ll n; cin>>n;
        vector<ll> a(n+2,1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<ll> b(n+2,1);
        for(ll i=1;i<=n+1;i++){
            b[i]=lcm(a[i],a[i-1]);
        }
        bool ans=true;
        for(ll i=1;i<=n;i++){
            if(__gcd(b[i],b[i+1])!=a[i]){
                ans=false;
                break;;
            }
        }   
        (ans)?cout<<"YES\n":cout<<"NO\n";;
    }
}
