#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a,b,c;
        cin >> a>> b>> c;
        if(a==1||b==1){
            cout<<"NO"<<endl;
        }
        else{
            int part;
            if(a%b==0){
                part=a/b;
            }
            else{
                part=a/b+1;
            }
            if((a-part)<=c){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
        t--;
    }
}