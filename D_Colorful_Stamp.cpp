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
        string s;
        cin>>s;
        bool start=false,ans=true;
        int Rcnt=0,Bcnt=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='R'||s[i]=='B'){
                start=true;
                if(s[i]=='R'){
                    Rcnt++;
                }
                else{
                    Bcnt++;
                }
            }
            if(s[i]=='W'&&start||i==n-1&&start){
                if(Bcnt==0||Rcnt==0){
                    ans=false;
                    break;
                }
                else{
                    start=false;
                    Bcnt=0;
                    Rcnt=0;
                }
            }
            
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}