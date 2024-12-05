#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
        int N=100;
        int arr1[N];
        for (int i = 0; i < n; i++)
        {
            arr1[arr[i]]=0;
        }
        for (int i = 0; i < n; i++)
        {
            arr1[arr[i]]+=1;
        }
        int Max=0;
        for (int i = 0; i < n; i++)
        {
            Max=max(Max,arr1[arr[i]]);
        }
        cout<<n-Max<<endl;
    }
    return 0;
}