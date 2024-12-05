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
        string s;
        cin>>s;
        char x='0';
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]=='?'){
                s[i]=x;
                x=s[i];
            }
            else{
                x=s[i];
            }
        }
        cout<<s<<endl;
        t--;
    }
}