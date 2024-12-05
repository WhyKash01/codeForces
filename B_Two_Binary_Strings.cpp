#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
bool sortbysec(const pair<int,int> &a,
            const pair<int,int> &b)
{
    return (a.second < b.second);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        string a,b;
        cin >> a>>b;
        bool ans=true;
        for (int i = 1; i < a.size(); i++)
        {
            if(a[i]==b[i]&&a[i]=='1'&&ans){
                break;
            }
            else if(a[i]==b[i]&&a[i]=='0'){
                ans=true;
            }
            else{
                ans=false;
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}