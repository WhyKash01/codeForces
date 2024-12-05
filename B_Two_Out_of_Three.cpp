#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
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
        int i = 0;
        int arr1[101];
        for (int i = 0; i < 101; i++)
        {
            arr1[i] = 0;
        }
        for (int i = 0; i < n; i++)
        {
            arr1[arr[i]]++;
        }
        int count = 0;
        for (int i = 0; i < 101; i++)
        {
            if (arr1[i] >= 2)
            {
                count++;
            }
        }
        if (count < 2)
        {
            cout << -1 << endl;
        }
        else
        {
            int a = 0, b = 0;
            int ans[n];

            for (int i = 0; i < n; i++)
            {
                if (arr[i] == a)
                {
                    ans[i]=2;
                    a=-1;
                }
                else if(arr[i]==b){
                    ans[i]=3;
                    b=-1;
                }
                else if(a==0&&arr1[arr[i]]>=2){
                    a=arr[i];
                    ans[i]=1;
                    arr1[arr[i]]=1;
                }
                else if(b==0&&arr1[arr[i]]>=2){
                    b=arr[i];
                    ans[i]=1;
                }
                else{
                    ans[i]=1;
                }
            }
            for (int i = 0; i < n; i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}