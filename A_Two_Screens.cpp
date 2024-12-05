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
        string s,t;
        cin>>s>>t;
        int count=0;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]==t[i]){
                count++;
            }
            else{
                break;
            }
        }
        int ans;
        if(count>1){
            ans=s.size()+t.size()-count+1;
        }
        else{
            ans=s.size()+t.size();
        }
        cout<<ans<<endl;
    }
}