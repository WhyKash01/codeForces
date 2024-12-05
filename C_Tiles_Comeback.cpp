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
        int n,k;
        cin>>n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        if(arr[0]==arr[n-1]){
            int count=2;
            for (int i = 1; i < n-1; i++)
            {
                if(arr[i]==arr[0]){
                    count++;
                }
            }
            if(count>=k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            int i=0;
            int count=0,index1=10e6,index2=0;
            while(count<k){
                if(i==n-1){
                    break;
                }
                if(arr[i]==arr[0]){
                    count++;                  
                    if(count==k){
                        index1=i;
                        break;
                    }
                }
                i++;
            }
            i=n-1;
            count=0;
            while(count<k){
                if(i==0){
                    break;
                }
                if(arr[i]==arr[n-1]){
                    count++;                  
                    if(count==k){
                        index2=i;
                        break;
                    }
                }
                i--;
            }
            if(index1<index2){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}