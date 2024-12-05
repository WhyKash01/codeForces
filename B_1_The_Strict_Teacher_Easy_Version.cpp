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
        int n,m,q;
        cin>>n>>m>>q;
        int pos[m];
        for (int i = 0; i < m; i++)
        {
            cin>>pos[i];
        }
        int x;
        cin>>x;
        sort(pos,pos+m);
        if(pos[0]==x||pos[1]==x){
            cout<<0<<endl;
        }
        else if(pos[0]>x){
            cout<<pos[0]-1<<endl;
        }
        else if(pos[1]<x){
            cout<<n-pos[1]<<endl;
        }
        else{
            int z=min(abs((pos[1]+pos[0])/2-pos[0]),abs((pos[1]+pos[0])/2-pos[1]));
            cout<<z<<endl;
        }
    }
}