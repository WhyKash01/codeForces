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
        int a,b;
        cin>>a>>b;
        int count=0;
        while (a!=b)
        {
            if(a>b){
                if(a%2==0){
                    count+=a/2;
                    a=a/2;
                }
                else{
                    count+=a/2+1;
                    a=a/2;
                }
            }
            else{
                if(b%2==0){
                    count+=b/2;
                    b=b/2;
                }
                else{
                    count+=b/2+1;
                    b=b/2;
                }
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}