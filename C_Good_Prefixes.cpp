#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        
        int count=0;
        for (int i = 0; i < n; i++)
        {
            long long ans=0;
            long long Max=0;
            for (int j = 0; j < i+1; j++)
            {
                Max=max(Max,arr[j]);
                ans+=arr[j];
            }
            if(ans-Max==Max){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}