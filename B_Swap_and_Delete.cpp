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
        int n=s.size();
        int num0=0,num1=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='0'){
                num0++;
            }
            else{
                num1++;
            }
        }
        int l=min(num0,num1);
        int i=0;
        string t;
        if(num0==num1){
            cout<<0<<endl;
        }
        else if(num0<num1){
            int r=l;
            for (int i = 0; i < n; i++)
            {
                
                if(s[i]=='1'&&l!=0){
                    l--;
                    t.push_back('0');
                }
                else if(s[i]=='0'&&r!=0){
                    t.push_back('1');
                    r--;
                }
                else{
                    t.push_back(s[i]);
                }
            }
            int count=0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]!=t[i]){
                    count++;
                }
                else{
                    break;
                }
            }

            cout<<n-count<<endl;
        }
        else{
            int r=l;
            for (int i = 0; i < n; i++)
            {
                
                if(s[i]=='0'&&l!=0){
                    l--;
                    t.push_back('1');
                }
                else if(s[i]=='1'&&r!=0){
                    t.push_back('0');
                    r--;
                }
                else{
                    t.push_back(s[i]);
                }
            }
            
            
            int count=0;
            for (int i = 0; i < n; i++)
            {
                if(s[i]!=t[i]){
                    count++;
                }
                else{
                    break;
                }
            }
            cout<<n-count<<endl;
        }
        
    }
    return 0;
}