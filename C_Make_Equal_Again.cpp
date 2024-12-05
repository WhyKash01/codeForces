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
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {

            cin >> arr[i];
        }
        if(arr[0]==arr[n-1]){
            int i=0,ans;
            int count=0;
            while (arr[0]==arr[i])
            {
                count++;
                i++;
            }
            ans=count;
            count=0;
            i=n-1;
            while (arr[n-1]==arr[i])
            {
                count++;
                i--;
            }
            ans+=count;
            int x=n-ans;
            if(x<0){
                cout<<0<<endl;
            }
            else{
            cout<<x<<endl;
            }
                
        }
        else{
            int i=0,ans;
            int count=0;
            while (arr[0]==arr[i])
            {
                count++;
                i++;
            }
            ans=count;
            count=0;
            i=n-1;
            while (arr[n-1]==arr[i])
            {
                count++;
                i--;
            }
            ans=max(ans,count);
            int x=n-ans;
            if(x<0){
                cout<<0<<endl;
            }
            else{
            cout<<x<<endl;
            }
        }
    }
    return 0;
}