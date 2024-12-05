#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        int arr[n];
        arr[n/2]=1;
        int count=2;
        int start=0,end=n-1;
        for (int i = 2; i <= n; i++)
        {
            if(i%2==0){
            arr[start]=i;
            start++;
            }
            else{
                arr[end]=i;
                end--;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        t--;
    }
}