#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        string a,b;
        cin>>a>>b;
        char temp=a[0];
        a[0]=b[0];
        b[0]=temp;
        cout<<a<<" "<<b<<endl;
        t--;
    }
    
}