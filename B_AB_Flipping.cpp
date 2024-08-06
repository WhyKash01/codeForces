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
        int count=0;
        vector<int> rep(n,0);
        int i=0;
        int ans=0;
        while (count!=n-1)
        {
            if(s[i]=='A'&&s[i+1]=='B'&&rep[i]==0 ){
                rep[i]=1;
                char temp=s[i];
                s[i]=s[i+1];
                s[i+1]=temp;
                count=0;
                ans++;
            }
            else if(i==n-1){
                i=0;
            }
            else{
                count++;
                i++;
            }
        }
        
        cout<<ans<<endl;
        
        t--;
    }
}