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
        int n,k,d,w;
        cin>>n>>k>>d>>w;
        int a[n];
        int count=1,ans=0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int curr=a[0];
        int i=0;
        for (int i = 0; i < n; i++)
        {
            if(k==1){
                ans=n;
                break;
            }
            else if(count==1&&count<k){
                ans++;
                curr=a[i];
                count++;
            }
            else if(a[i]<=curr+d+w&&count<k){
                count++;
            }
            else{
                if(a[i]<=curr+d+w&&count<=k){
                    count=1;
                }
                else{
                    ans++;
                    curr=a[i];
                    count=2;
                }
            }
        }
        
        cout<<ans<<endl;
    }
}
