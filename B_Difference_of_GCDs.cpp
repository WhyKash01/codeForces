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
        ll n,l,r;
        cin>>n>>l>>r;
        ll a[n]={-1};
            ll count=1;
            
            int flag=1;
            for (int i = 0; i < n; i++)
            {
                if(r-r%count<l||r-r%count>r){
                    flag=0;
                    break;
                }
                a[i]=r-r%count;
                // cout<<l+l%count<<" ";
                count++;
            }
            if(flag){
                cout<<"YES"<<endl;
                for (int i = 0; i < n; i++)
                {
                    cout<<a[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        
    }
}