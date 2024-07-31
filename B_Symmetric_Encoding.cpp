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
        string r;
        string x=s;
        sort(x.begin(),x.end());
        for (int i = 0; i < n-1; i++)
        {
            if(x[i]!=x[i+1]){
                r=r+x[i];
            }
        }
        r=r+x[n-1];
        unordered_map<char, char> map;
        for (int i = 0; i < r.size(); i++)
        {
            map[r[i]]=r[(r.size()-1)-i];
        }
        for (int i = 0; i < n; i++)
        {
            s[i]=map[s[i]];
        }
        cout<<s<<endl;
        t--;
    }
}