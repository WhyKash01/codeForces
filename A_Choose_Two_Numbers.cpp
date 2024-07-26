#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    int m;
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);
    cout<<arr1[n-1]<<" "<<arr2[m-1];
}