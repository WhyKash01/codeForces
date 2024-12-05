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
        int x=(s[0]-'a')-(s[s.size()-1]-'a');
        if(x<0){
            x=-x;
        }
        cout<<x<<" ";
        string z;
        map<char,set<int>>m;
        char sm=min(s[0], s[s.size()-1]),lg=max(s[0], s[s.size()-1]);
        for (int i = 0; i < s.size(); i++)
        {   
            if(m[s[i]].size()==0&&s[i]>=sm&&s[i]<=lg){
                z.push_back(s[i]);
            }
            m[s[i]].insert(i+1);
        }
        vector<int> ans;
        sort(z.begin(),z.end());
        if(s[0]<=s[s.size()-1]){
            for (int i = 0; i < z.size(); i++)
            {
                for (auto j = m[z[i]].begin(); j != m[z[i]].end(); j++)
                {
                    ans.push_back(*j);
                }
            }
        }
        else{
            for (int i = z.size()-1; i >= 0; i--)
            {
                for (auto j = m[z[i]].begin(); j != m[z[i]].end(); j++)
                {
                    ans.push_back(*j);
                }
            }
        }
        cout<<ans.size()<<endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}