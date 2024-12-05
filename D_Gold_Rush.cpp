#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n,m;
        cin>>n>>m;
        bool ans;
        while(true){
            if(n<m){
                ans=false;
                break;
            }
            else if(n==m){
                ans=true;
                break;
            }
            else{
                if(n%m==0){
                    m=m*3;
                }
                else if(m%2!=0){
                    ans=false;
                    break;
                }
                else{
                    m=m*3/2;
                }
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}