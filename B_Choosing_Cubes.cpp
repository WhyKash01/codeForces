#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int arr[a];
        for (int i = 0; i < a; i++)
        {
            cin>>arr[i];
        }
        int fav=arr[b-1];
        sort(arr,arr+a,greater<int>());
        if(a==c){
            cout<<"YES"<<endl;
        }
        else if(arr[c]==arr[c-1] &&fav==arr[c]){
            cout<<"MAYBE"<<endl;
        }
        else if(arr[c]>=fav){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        t--;
    }
    
}