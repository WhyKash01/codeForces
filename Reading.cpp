#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int rem=n%4;
    if(rem==0){
        cout <<1<<" "<<"A";
    }
    else if(rem==1){
        cout<<0<<" "<<"A";
    }
    else if(rem==3){
        cout<<2<<" "<<"A";
    }
    else{
        cout<<1<<" "<<"B";
    }
}