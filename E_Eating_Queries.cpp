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
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        ll b[k];
        for (int i = 0; i < k; i++)
        {
            cin>>b[i];
        }
        sort(a,a+n,greater<ll>());
        ll sum[n];
        sum[0]=a[0];
        for (int i = 1; i < n; i++)
        {
            sum[i]=sum[i-1]+a[i];
        }
        for (int i = 0; i < k; i++)
        {
            int high=n-1,low=0;
            while (high-low>1){
                int mid=(high+low)/2;
                if(sum[mid]<b[i]){
                    low=mid+1;
                }
                else{
                    high=mid;
                }
            }
            if(sum[low]>=b[i]){
                cout<<low+1<<endl;
            }
            else if(sum[high]>=b[i]){
                cout<<high+1<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        
    }
}