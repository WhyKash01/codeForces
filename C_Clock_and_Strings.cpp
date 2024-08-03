#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a,b,c,d;
        cin >> a>> b>> c>> d;
        int a1=a,b1=b,a2=c,b2=d;
        if(a>b){
            a1=b;
            b1=a;
        }
        if(c>d){
            a2=d;
            b2=c;
        }
        if(a1>=a2&&b1>=b2&&b1>a2&&b2>a1){
            cout<<"YES"<<endl;
        }
        else if(a1<=a2&&b1<=b2&&b1>a2&&b2>a1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}