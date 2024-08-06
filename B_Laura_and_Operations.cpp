#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a,b,c;
        cin >> a>>b>>c;
        if(a==b&&b==c){
            cout<<"1 1 1";
        }
        else{
            int diff=b-c;
            if(diff<0){
                diff=-diff;
            }
            if(diff%2==0){
                if(diff/2<=a+1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                cout<<"0 ";
            }
            diff=a-c;
            if(diff<0){
                diff=-diff;
            }
            if(diff%2==0){
                if(diff/2<=b+1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                
                    cout<<"0 ";
                
            }
            diff=a-b;
            if(diff<0){
                diff=-diff;
            }
            if(diff%2==0){
                if(diff/2<=c+1){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
        t--;
    }
}