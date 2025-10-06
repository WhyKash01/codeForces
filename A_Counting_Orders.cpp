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
    ll res = binaryExpo(a, b / 2);
    if (b & 1)
    {
        return a * res * res;
    }
    else
    {
        return res * res;
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
        cin >> n;
        ll a[n],b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        int curr=0;
        ll ans=1;
        bool z=true;
        for (int i = 0; i < n; i++)
        {
            
            for (int j = curr; j < n; j++)
            {
                if(a[i]>b[j]&&j==n-1){
                    curr++;
                    ans=ans*(curr-i)%M;
                    for (int k = i+1; k < n; k++)
                    {
                        ans=ans*(n-k)%M;
                    }
                    
                }
                else if(a[i]>b[j]){
                    curr++;
                }
                else{
                    ans=ans*(curr-i)%M;
                    break;
                }
            }
            
        }
        cout<<ans%M<<endl;
    }
}
