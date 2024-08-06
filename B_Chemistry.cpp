#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t > 0)
    {
        int n,k;
        cin >> n>>k;
        string s;
        cin>>s;
        unordered_map<char,bool> even;
        for (int i = 0; i < n; i++)
        {
            even[s[i]]=true;
        }
        for (int i = 0; i < n; i++)
        {
            if(even[s[i]]==true){
                even[s[i]]=false;
                k--;
            }
            else{
                even[s[i]]=true;
                k++;
            }
        }
        if(k>=-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
}