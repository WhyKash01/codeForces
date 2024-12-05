#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        int arr[n];
        int arr1[n];
        for (int i = 0; i < n; i++)
        {
            arr1[i]=0;
            cin>>arr[i];
        }
        int start=0,end=n-1;
        bool ans;
        while (end-start>1)
        {
            
            if(arr[start]==arr1[start]){
                start++;
            }
            else if(arr1[start]>arr[start]){
                
                break;
            }
            else{
                int a=arr[start]-arr1[start];
                arr1[start]+=a;
                arr1[start+1]+=2*a;
                arr1[start+2]+=a;
                start++;
            }
            
            if(arr[end]==arr1[end]){
                end--;
            }
            else if(arr1[end]>arr[end]){
                
                break;
            }
            else{
                int a=arr[end]-arr1[end];
                arr1[end]+=a;
                arr1[end-1]+=2*a;
                arr1[end-2]+=a;
                end--;
            }
        }
        int count=0;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]==arr1[i]){
                count++;
            }
        }
        if(count==n){
        cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}