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
        if(n%2==0){
            cout<< -1<<endl;
        }
        else{
            int count=n;
            for (int i = 0; i < n/2; i++)
            {
                arr[i]=count;
                count--;
                arr[n-i-1]=count;
                count--;
            }
            arr[n/2]=1;
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        }
    }
    return 0;
}