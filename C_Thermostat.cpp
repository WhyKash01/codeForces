#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r,x;
        cin>>l>>r>>x;
        int a,b;
        cin>>a>>b;
        int gap=a-b;
        if(gap<0){
            gap=-gap;
        }
        if(gap==0){
            cout<<0<<endl;
        }
        else if(gap>=x){
            cout<<1<<endl;
        }
        else{
            int acnt,bcnt;
            if(a+x<=r&&a-x>=l){
                acnt=2;
            }
            else if(a+x<=r || a-x>=l){
                acnt=1;
            }
            else{
                acnt=0;
            }
            if(b+x<=r&&b-x>=l){
                bcnt=2;
            }
            else if(b+x<=r || b-x>=l){
                bcnt=1;
            }
            else{
                bcnt=0;
            }
            // cout<<acnt<<" "<<bcnt<<endl;
            if(acnt==0||bcnt==0){
                cout<<-1<<endl;
            }
            else if(acnt==2||bcnt==2){
                cout<<2<<endl;
            }
            else if(a+x<=r&&b+x<=r||a-x>=l&&b-x>=l){
                cout<<2<<endl;
            }
            else{
                cout<<3<<endl;
            }
        }
    }
}