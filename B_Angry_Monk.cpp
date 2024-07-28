#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int n,k;
        cin>>n>>k;
        int arr[k];
        for (int i = 0; i < k; i++)
        {
            cin>>arr[i];
        }
        int max=arr[0];
        for (int i = 1; i < k; i++)
        {
            if(arr[i]>max){
                max=arr[i];
            }
        }
        bool Nottaken=true;
        int ans=0;
        for (int i = 0; i < k; i++)
        {
            if(max==arr[i] && Nottaken==true){
                Nottaken=false;
            }
            else{
                if(arr[i]==1){
                    ans++;
                }
                else{
                    ans=ans+arr[i]+arr[i]-1;
                }
            }
        }
        //asd
        cout<<ans<<endl;
        t--;
    }
    
    }