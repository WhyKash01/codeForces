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
        string s;
        cin>>s;
        string ans="";
        int x=0;
        for (int i = 1; i < s.size(); i++)
        {
            if(s[i]==s[i-1]){
                x=1;
                break;
            }
        }
        if(s=="()"){
            cout<<"NO"<<endl;
        }
        else if(x){
            cout<<"YES"<<endl;
            for (int i = 0; i < s.size(); i++)
            {
                cout<<"()";
            }
            cout<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for (int i = 0; i < s.size(); i++)
            {
                cout<<'(';
            }
            for (int i = 0; i < s.size(); i++)
            {
                cout<<')';
            }
            cout<<endl;
        }
    }
}