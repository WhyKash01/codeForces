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
        int n;
        cin>>n;
        string a;
        cin>>a;
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        int last=-1;
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]=='0'){
                last=i;
            }
            else{
                if(last!=-1){
                    if(b[i]<b[last]){
                        sum+=b[last];
                        
                        last=i;
                    }
                    else{
                        sum+=b[i];
                    }
                }
                else{
                    sum+=b[i];
                }
            }
        }
        cout<<sum<<endl;
    }
}