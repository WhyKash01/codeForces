#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        arr[i]=a;
    }
    int k;
    cin>>k;
    int ans=n;
    for (int i = 1; i < n; i++)
    {
        if(k>=arr[i]){
            ans--;
        }
    }
    cout<<ans;
    
}