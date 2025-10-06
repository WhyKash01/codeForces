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
        int n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll Min=10000000000000;
        for (int i = 0; i < n; i++)
        {
            Min=min(Min,a[i]);
        }
        if(a[0]==Min){
            cout<<"Bob"<<endl;
        }
        else{
            cout<<"Alice"<<endl;
        }
    }
}
