#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        long long n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int x=arr[0],y,count=0,j=1;
        while(count<1){
            if(arr[j]%x!=0||j==n-1){
                y=arr[j];
                count++;
            }
            else{
                j++;
            }
        }
        string ans;
        int e=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%x!=0&&arr[i]%y!=0){
                ans="NO";
                break;
            }
            else{
                e++;
            }
        }
        if(e==n){
            ans="YES";
        }
        cout<<ans<<endl;
        t--;
    }
}