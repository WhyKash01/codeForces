#define LCM(a,b) (a)*((b)/std::__gcd(a,b));
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long a,b,c;
        cin >> a>>b>>c;
        cout<<(c/a+1)+(c/b+1)<<endl;
        t--;
    }
}