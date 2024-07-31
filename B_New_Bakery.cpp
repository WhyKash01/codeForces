#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    const long long M = 1000000007;
    cin>>t;
    while (t>0)
    {
        long long n,a,b;
        cin>>n>>a>>b;
        if(b<a){
            long long x=(a*n);
            cout<<x<<endl;
        }
        else{
            long long k;
            if((b-a)<n){
            k=b-a;    
            }
            else{
            k=n;
            }
            long long ans=1;
            long long g=k*(b+(b-k+1))/2;
            ans=((n-k)*ans);
            ans=(a*ans);
            cout<<ans+g<<endl;
        }
        t--;
    }
    
}