#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n;
        string s;
        cin >> n >> s;
        map < int, multiset<char>> m;
        map<char,int> charcount;
        string temp;
        for (int i = 0; i < n; i++)
        {
            temp.push_back('0');
        }
        
        for (int i = 0; i < n; i++)
        {
            charcount[s[i]]++;
        }
        for (auto it=charcount.begin();it!=charcount.end();it++)
        {
            m[(*it).second].insert((*it).first);
        }
        int count=0,count1=1;

        for (auto i = m.begin(); i != m.end(); i++)
        {
            for (auto j = (*i).second.begin(); j != (*i).second.end(); j++)
            {
                int x=(*i).first;
                for (int i = 0; i < x; i++)
                {
                    if(count<n){
                        temp[count]=(*j);
                        count+=2;
                    }
                    else{
                        temp[count1]=(*j);
                        count1+=2;
                    }
                }
                
            }
            
        }
        cout<<temp<<endl;
        t--;
    }
}