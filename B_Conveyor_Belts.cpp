
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int currbelt(int a,int b,int x,int y,int n){
    
    if(a==0&&b==0){
        return min(x,y);
    }
    else if(a==1&&b==0){
        return min((n-x+1),y);
    }
    else if(a==0&&b==1){
        return min((n-y+1),x);
    }
    else{
        return min((n-x+1),(n-y+1));
    }
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        ll n,x1,x2,y1,y2;
        cin>>n>>x1>>y1>>x2>>y2;
        int a,b;
        if(x1>n/2){
            a=1;
        }
        else{
            a=0;
        }
        if(y1>n/2){
            b=1;
        }
        else{
            b=0;
        }
        int a1,b1;
        if(x2>n/2){
            a1=1;
        }
        else{
            a1=0;
        }
        if(y2>n/2){
            b1=1;
        }
        else{
            b1=0;
        }
        int belt1=currbelt(a,b,x1,y1,n), belt2=currbelt(a1,b1,x2,y2,n);
        cout<<abs(belt1-belt2)<<endl;
    }
}