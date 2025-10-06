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
        string s,r;
        cin>>n>>s>>r;
        int cnt1=0,cnt0=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='1'){
                cnt1++;
            }
            else{
                cnt0++;
            }
        }
        bool ans=true;
        for (int i = 0; i < n-1; i++)
        {
            if(cnt0==0||cnt1==0){
                ans=false;
                break;
            }
            if(r[i]=='1'){
                cnt0--;
            }
            else{
                cnt1--;
            }
        }
        (ans)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
}