#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int a;
        cin >> a;
        string s;
        cin>>s;
        bool win=false;
        for (int i = 0; i < a; i++)
        {
            if(s[i]=='U'){
                win=!win;
            }
        }
        if(win){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}