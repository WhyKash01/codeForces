#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        string s;
        cin >> s;
        if (s.size() <= 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            int count = 1;
            for (int i = 0; i < s.size() - 1; i++)
            {
                if (s[i] == s[i + 1])
                {
                    count++;
                }
            }
            if (count == s.size())
            {
                cout << "NO" << endl;
            }
            else
            {
                int index;
                for (int i = 0; i < s.size() - 1; i++)
                {
                    if (s[i] != s[i + 1])
                    {
                        index=i;
                        break;
                    }
                }
                char temp=s[index];
                s[index]=s[index+1];
                s[index+1]=temp;
                cout<<"YES"<<endl;
                cout<<s<<endl;
            }
        }
        t--;
    }
}