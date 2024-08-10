#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long x,y;
        cin >> x>>y;
        long long a=pow(2,log2((x^y)&(-(x^y)))); 
        cout<<a<<"\n";
        t--;
    }
}