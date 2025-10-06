#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
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
        int x,y,k;
        cin>>x>>y>>k;
        int numx,numy;
        if(x%k!=0)numx=x/k+1;
        else numx=x/k;
        if(y%k!=0)numy=y/k+1;
        else numy=y/k;
        int res=0;
        if(numx<=numy)res=numy*2;
        else res=numx*2-1;
        cout<<res<<endl;
    }
}