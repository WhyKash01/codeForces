#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x,y;
        cin>>x>>y;
        string a[x];
        for (int i = 0; i < x; i++)
        {
            cin>>a[i];
        }
        int xc=0,yc=0;
        for (int i = 0; i < x/y; i++)
        {
            yc=0;
            for (int j = 0; j < x/y; j++)
            {
                cout<<a[xc][yc];
                yc=yc+y;
            }
            cout<<endl;
            xc=xc+y;
        }
    }
}