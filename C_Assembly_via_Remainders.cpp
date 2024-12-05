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
        cin>>n;
        int arr[n-1];
        for (int i = 0; i < n-1; i++)
        {
            cin>>arr[i];
        }
        int ans[n];
        ans[0]=arr[0]+1;
        int check=ans[0]+arr[0];
        for (int i = 1; i < n; i++)
        {
            if(check>arr[i]){
                ans[i]=check;
                check=check+arr[i];
            }
            else{
                int x=((ans[i-1]-(arr[i]-((arr[i]/ans[i-1])*ans[i-1])))+arr[i])+arr[i-1];
                check=x;
                ans[i]=check;
                check=check+arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
        t--;
    }
}