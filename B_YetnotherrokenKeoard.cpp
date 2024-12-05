#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        cin>>s;
        string result;
        int bcount=0,Bcount=0;
        for (int i = s.size()-1; i >= 0; i--)
        {
            
            if(s[i]=='b'){
                bcount++;
            }
            else if(s[i]=='B'){
                Bcount++;
            }
            else{
                if(isupper(s[i])&&Bcount>0){
                    Bcount--;
                }
                else if(islower(s[i])&&bcount>0){
                    bcount--;
                }
                else{
                    result.push_back(s[i]);
                }
            }
        }
        for (int i = result.size()-1; i >=0; i--)
        {
            cout<<result[i];
        }
        
        cout<<endl;
        
    }
    return 0;
}