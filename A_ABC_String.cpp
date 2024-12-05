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
        cin >> s;
        if(s[0]==s[s.size()-1]){
            cout<<"NO"<<endl;
        }
        else{
            int arr[3]={0};
            for (int i = 0; i < s.size(); i++)
            {
                if(s[i]=='A'){
                    arr[0]++;
                }
                else if(s[i]=='B'){
                    arr[1]++;
                }
                else{
                    arr[2]++;
                }
            }
            int Max=0;
            char c;
            for (int i = 0; i < 3; i++)
            {
                if(Max<arr[i]){
                    c='A'+i;
                    Max=arr[i];
                }
            }
            if(Max!=s.size()/2){
                cout<<"NO"<<endl;
            }
            else{
                int open=0,close=0;
                bool ans=true;
                if(s[0]==c){
                    for (int i = 0; i < s.size(); i++)
                    {
                        
                        if(s[i]==c){
                            open++;
                        }
                        else{
                            close++;
                        }
                        if(close>open){
                            ans=false;
                            break;
                        }
                    }
                    
                }
                else{
                    for (int i = 0; i < s.size(); i++)
                    {
                        
                        if(s[i]!=c){
                            open++;
                        }
                        else{
                            close++;
                        }
                        if(close>open){
                            ans=false;
                            break;
                        }
                    }
                }
                if(ans)
                    cout<<"YES"<<endl;
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}