#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int arr[3];
        cin>>arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        int point=arr[1];
        int ans=0;
        for (int i = 0; i < 3; i++)
        {
            int dis=0;
            if(arr[i]-point<0){
                dis=point-arr[i];
            }
            else{
                dis=arr[i]-point;
            }
            ans=ans+dis;
        }
        cout<<ans<<endl;
        t--;
    }
    
}