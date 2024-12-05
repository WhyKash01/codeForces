
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        string s,t;
        cin>>s>>t;
        int ptr=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==t[ptr]){
                ptr++;
            }
            else if(s[i]=='?'&&ptr<t.size()){
                s[i]=t[ptr];
                ptr++;
            }
            else if(s[i]=='?'){
                s[i]='a';
            }
        }
        if(ptr==t.size()){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}