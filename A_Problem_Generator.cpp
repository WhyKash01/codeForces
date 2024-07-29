#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int a,b;
        cin>>a>>b;
        string s;
        cin>>s;
        int ans=0;
        char curr='A';
        for (int i = 0; i < 7; i++)
        {
            
            int flag=b;
            for (int i = 0; i < a; i++)
            {
                if(flag==0){
                    break;
                }
                if(s[i]==curr){
                    flag--;
                }

            }
            ans=ans+flag;
            curr=curr+1;
        }
        cout<<ans<<endl;
        t--;
    }
    
}