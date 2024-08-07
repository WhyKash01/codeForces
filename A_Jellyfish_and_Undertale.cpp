#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long a,b,n;
        cin >> a>>b>>n;
        long long arr[n];
        long long sum=0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            if(arr[i]>=a){
                sum+=a-1;
            }
            else{
                sum+=arr[i];
            }
        }
        cout<<sum+b<<endl;
        t--;
    }
}