#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M=1000000007;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        ll index=0;
        for (int i = 0; i < k; i++)
        {
            if(arr[index]<arr[index+1]){
                arr[index]=(arr[index]*2);
                if(arr[index]>arr[index+1]){
                    sort(arr,arr+n);
                }
            }
            
        }
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            sum=(sum+arr[i])%M;
        }
        cout<<sum%M<<endl;
    }
    return 0;
}