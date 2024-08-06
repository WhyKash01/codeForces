#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin >> n;
        string s;
        cin>>s;
        bool end=false;
        for (int i = 0; i < n-1; i++)
        {
            if(s[i]=='a'||s[i]=='e'){
                end=true;
                cout<<s[i];
            }
            else{
                if(end&&(s[i+1]=='a'||s[i+1]=='e')){
                    cout<<"."<<s[i];
                }
                else{
                    cout<<s[i];
                }
            }
        }
        cout<<s[n-1]<<endl;
        t--;
    }
}