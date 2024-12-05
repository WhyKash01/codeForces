
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
        int n;
        cin>>n;
        string s;
        cin>>s;
        int opencnt=0,closecnt=0;
        for (int i = 0; i < n; i++)
        {
            if(opencnt==closecnt&&s[i]=='_'){
                s[i]='(';
                opencnt++;
            }
            else if(opencnt>closecnt&&s[i]=='_'){
                s[i]=')';
                closecnt++;
            }
            else if(s[i]=='('){
                opencnt++;
            }
            else if(s[i]==')'){
                closecnt++;
            }
        }
        vector<int> v;
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(s[i]=='('){
                v.push_back(i);
            }
            else{
                ans=ans+(i-v[v.size()-1]);
                v.pop_back();
            }
        }
        
        cout<<ans<<endl;
    }
}