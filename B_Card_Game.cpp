#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int arr[4];
        cin >> arr[0]>>arr[1]>>arr[2]>>arr[3];
        if(arr[0]>arr[1]){
            swap(arr[0], arr[1]);
        }
        sort(arr+2,arr+4);
        
        if(arr[0]>arr[2]&&arr[0]>arr[3]||arr[0]>arr[2]&&arr[1]>arr[3]&&arr[0]>=arr[3]||arr[0]==arr[2]&&arr[0]==arr[3]&&arr[0]<arr[1]||arr[0]==arr[1]&&arr[0]>arr[2]&&arr[0]==arr[3]){
            cout<<4<<endl;
        }
        else if(arr[0]>arr[2]&&arr[1]>arr[3]||arr[0]==arr[2]&&arr[1]>arr[3]||arr[0]>arr[2]&&arr[1]==arr[3]){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}