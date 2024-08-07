#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int arr[3];
        cin >> arr[0]>>arr[1]>>arr[2];
        sort(arr,arr+3);
        int count=3;
        for (int i = 0; i < 2; i++)
        {
            if(arr[i]!=arr[i+1]&&count>0){
                if(arr[i]==arr[i+1]-arr[i]){
                    count--;
                    arr[i+1]=arr[i];
                }
                else if(arr[i+1]%arr[i]==0&&count>0){
                    while(count!=0){
                        if(arr[i]==arr[i+1]){
                            
                            break;
                        }
                        arr[i+1]=arr[i+1]-arr[i];
                        count--;
                        
                    }
                }
                else{
                    count=-1;
                    break;
                }
                
            }
        }
        if(count>=0&&arr[0]==arr[1]&&arr[1]==arr[2]){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}