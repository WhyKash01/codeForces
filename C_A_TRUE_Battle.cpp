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
        string s;
        cin>>n>>s;
        int cnt1=0,cnt0=0,z=0;
        bool ans=false;
        for (int i = 0; i < n-1; i++)
        {
            if(s.substr(i,2)=="11"){
                ans=true;
            }
        }
        if(s[0]=='1'||s[n-1]=='1'){
            ans=true;
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}