#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
ll binaryExpo(ll a, ll b)
{
    if (b == 0)
    {
        return 1;
    }
    ll res=binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res*res;
    }
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
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int count=0,cage=0,empty=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]==1){
                count++;
                if(empty==0){
                    cage++;
                }
                else{
                    empty--;
                }
            }
            else{
                if(count>0){
                empty=cage-(count/2+1);
                }
            }
        }
        cout<<cage<<endl;
    }
}
