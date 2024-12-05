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
        cin >> n>>k;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        bool is_div=false;
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%k==0){
                is_div=true;
                break;
            }
        }
        if(is_div){
            cout<<0<<endl;
        }
        else{
            if(k!=4){
                int Min=100;
                for (int i = 0; i < n; i++)
                {
                    int x=k-(arr[i]%k);
                    Min=min(Min,x);
                }
                cout<<Min<<endl;
            }
            else{
                
                

                int count=0;
                for (int i = 0; i < n; i++)
                {
                    if(arr[i]%2==0){
                        count++;
                    }
                }
                if(count>=2){
                    cout<<0<<endl;
                }
                else if(count==1){
                    cout<<1<<endl;
                }
                else{
                    int Min=100;
                for (int i = 0; i < n; i++)
                {
                    int x=k-(arr[i]%k);
                    Min=min(Min,x);
                }
                if(Min==1){
                    cout<<1<<endl;
                }
                else{
                    cout<<2<<endl;
                }
                
                }
            }
        }
    }
    return 0;
}