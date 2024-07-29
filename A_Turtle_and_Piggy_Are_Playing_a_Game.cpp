#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b;
        cin>>a>>b;
        int x=2;
        int c=2;
        int count=1;
        while(x<b){
            if(x*c<=b){
                x=x*c;
                count++;
            }
            else{
                break;
            }
        }
        cout<<count<<endl;
        t--;
    }
    
}