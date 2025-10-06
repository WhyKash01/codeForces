

#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        ll a[n];
        bool f=true;
        for (int i = y-2; i >= 0; i--)
        {
            f?a[i]=-1:a[i]=1;
            f=!f;
        }
        for (int i = y-1; i < x; i++)
        {
            a[i]=1;
        }
        
        f=true;
        for (int i = x; i < n; i++)
        {
            f?a[i]=-1:a[i]=1;
            f=!f;
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}
