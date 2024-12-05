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
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        vector<ll> odd,even;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            if(x%2==0){
                even.push_back(x);
            }
            else{
                odd.push_back(x);
            }
        }
        vector<ll> a,b;
        a=odd;
        b=even;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a==odd&&b==even){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}