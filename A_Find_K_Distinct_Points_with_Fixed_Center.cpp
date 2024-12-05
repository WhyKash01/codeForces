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
        int x,y,m;
        cin>>x>>y>>m;
        int count=1;
        for (int i = 0; i < m/2; i++)
        {
            cout<<x-count<<" "<<y-count<<endl;
            cout<<x+count<<" "<<y+count<<endl;
            count++;
        }
        if(m%2!=0){
            cout<<x<<" "<<y<<endl;
        }
    }
}