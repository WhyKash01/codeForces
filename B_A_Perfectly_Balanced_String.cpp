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
        cin>>s;
        unordered_map<char,int> m;
        for (int i = 0; i < s.size(); i++)
        {
            m[s[i]]++;
        }
        string sub;
        for (int i = 0; i < m.size(); i++)
        {
            sub.push_back(s[i]);
        }
        int count=m.size();
        bool ans=true;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i]!=sub[i%count]){
                ans=false;
                break;
            }
        }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}