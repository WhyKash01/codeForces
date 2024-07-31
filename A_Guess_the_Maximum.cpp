#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int k;
        cin>>k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin>>arr[i];
        }
        vector<int> a;
        int max=0;
        for (int i = 0; i < k-1; i++)
        {
            
            if(arr[i]<arr[i+1]){
                max=arr[i+1];
            }
            else if(arr[i]==arr[i+1]){
                max=arr[i];
            }
            else{
                max=arr[i];
            }
            a.push_back(max);
        }
        
        int ans=a[0];
        for (int i = 0; i < a.size()-1; i++)
        {
            
            if(ans>a[i+1]){
                ans=a[i+1];
            }
        }
        cout<<ans-1<<endl;
        t--;
    }
    
}