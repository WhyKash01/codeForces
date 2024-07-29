#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int n;
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]){
            cout<<"NO"<<endl;
        }
        else if(arr[n-1]-arr[1]==0){
            cout<<"YES"<<endl;
            string ans="BR";
            for (int i = 0; i < n-2; i++)
            {
                ans=ans+"B";
            }
            cout<<ans<<endl;
        }
        else{
            cout<<"YES"<<endl;
            string ans="R";
            for (int i = 0; i < n-1; i++)
            {
                ans=ans+"B";
            }
            cout<<ans<<endl;
        }
        t--;
    }
    
}