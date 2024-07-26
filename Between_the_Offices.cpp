#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string betwOff;
    cin>>betwOff;
    if(betwOff[0]=='S'&&betwOff[n-1]=='F'){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}