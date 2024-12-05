#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        

        for(int i=1;i<n;i+=2){
            int diff = arr[i-1] - arr[i];
            if(diff<=k){
                arr[i] += diff;
                k-=diff;
            }
            else{
                arr[i] += k;
                k=0;
            }
        }
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                ans+=arr[i];
            }
            else{
                ans-=arr[i];
            }
        }
        
        cout<<ans<<endl;
    }
    return 0;
}