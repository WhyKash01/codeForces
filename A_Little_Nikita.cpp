#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n,m;
        cin >> n>>m;
        if(m>n){
            cout<<"NO"<<endl;
        }
        else if(m==n){
            cout<<"YES"<<endl;
        }
        else if((n-m)%2==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}