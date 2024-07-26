#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t>0){
        int x,y,z,w,k;
        
        cin>>x>>y>>z>>w>>k;
        int co=0;
            if(x%z!=0){
                co++;
            }
            if(y%w!=0){
                co++;
            }
        if(x/z+y/w+co>k){
            cout<<-1<<endl;

        }
        else{
            
            if(x%z!=0){
                cout<<x/z+1;
            }
            else{
                cout<<x/z;
            }
            cout<<" ";
            if(y%w!=0){
                cout<<y/w+1<<endl;
            }
            else{
                cout<<y/w<<endl;
            }
        }
        t--;
    }
}