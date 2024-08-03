#define LCM(a,b) (a)*((b)/std::__gcd(a,b));
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count=0;
        int index=-1;
        for (int i = 0; i < n-2; i++)
        {
            if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p'){
                count++;
                index=i+2;
            }
            if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e'&&index!=i){
                count++;
            }
        }
        cout<<count<<endl;
        t--;
    }
}