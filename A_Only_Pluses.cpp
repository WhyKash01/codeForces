#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        for (int i = 0; i < 5; i++)
        {
            sort(arr ,arr+3);
            arr[0]++;
        }
        cout<<arr[0]*arr[1]*arr[2]<<endl;
        t--;
    }
    
}