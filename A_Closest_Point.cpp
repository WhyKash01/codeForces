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
        cin>>n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        int Min=1000;
        for (int i = 0; i < n-1; i++)
        {
            Min=min(Min,arr[i+1]-arr[i]);
        }
        if(n>2){
            cout<<"NO"<<endl;
        }
        else{
            if(Min==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
        }
    }
    return 0;
}