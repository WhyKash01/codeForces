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
            int min =c;
            if(diff<0){
                diff=-diff;
                min=b;
            }
            if(diff%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
            diff=a-c;
            min =c;
            if(diff<0){
                diff=-diff;
                min=a;
            }
            if(diff%2==0){
                cout<<"1 ";
            }
            else{
                    cout<<"0 ";
            }
            diff=a-b;
            min =b;
            if(diff<0){
                diff=-diff;
                min=a;
            }
            if(diff%2==0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
        t--;
    }
}