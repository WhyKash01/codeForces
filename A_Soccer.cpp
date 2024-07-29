#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b,x,y;
        cin>>a>>b>>x>>y;
        if((a>b&&x<y)||(a<b&&x>y)){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
        }
        t--;
    }
    
}