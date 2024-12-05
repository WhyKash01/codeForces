#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        if(n%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            ll x=arr[n/2];
            int count=0;
            for (int i = 0; i < n; i++)
            {
                if(arr[i]==x){
                    count++;
                }
            }
            if(count>n/2||(count==n/2&&arr[n/2-1]==arr[n/2])){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
                int z=0;
                for (int i = 0; i < n; i++)
                {
                    if(i%2==0){
                        cout<<arr[z]<<" ";
                    }
                    else{
                        cout<<arr[n/2+z]<<" ";
                        z++;
                    }
                }
                cout<<endl;
            }
        }
    }
}