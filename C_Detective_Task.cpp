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
        string s;
        cin>>s;
        int Max=0, Min=s.size()-1;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='1'){
                Max=max(Max,i);
            }
            if(s[i]=='0'){
                Min=min(Min,i);
            }
        }
        if(s[0]=='0'||s[s.size()-1]=='1'){
            cout<<1<<endl;
        }
        else if(Min<Max){
            cout<<1<<endl;
        }
        else if((Min-Max+1)>s.size()){
            cout<<s.size()<<endl;
        }
        else{
            cout<<Min-Max+1<<endl;
        }
    }
}