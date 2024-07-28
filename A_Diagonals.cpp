#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t>0)
    {
        int n,k;
        cin>>n>>k;
        if(k==0){
            cout<<0<<endl;
        }
        else{
            int ans=0;
            int i=n;
            while(k>0){
                if(k>i&&i==n){
                    k=k-i;
                    ans++;
                    i--;
                }
                else if(k>i){
                    if(k>2*i){
                        k=k-2*i;
                        ans=ans+2;
                        i--;
                    }
                    else{
                        k=0;
                        ans=ans+2;
                        i--;
                    }
                }
                else if(k<=i){
                    k=0;
                    ans++;
                }
            }
            cout<<ans<<endl;
        }
        t--;
    }
    
}