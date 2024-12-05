#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int l=n;
        bool ans=false;
        int count=0;
        while(n>=10&&l>101){
            if(n==10){
                int x=pow(10,count);
                int cmp=l%x;
                if(cmp>=x/10&&cmp!=1)
                    ans=true;
                break;
            }
            else{
                n=n/10;
                count++;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}