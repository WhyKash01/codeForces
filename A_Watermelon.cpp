#define LCM(a,b) (a)*((b)/std::__gcd(a,b));
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if(t<3){
        cout<<"NO"<<endl;
    }
    else if(t%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}