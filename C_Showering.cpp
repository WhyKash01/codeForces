#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,s,m;
        cin>>n>>s>>m;
        vector<pair<int,int>> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i].first>>v[i].second;
        }
        int start=0;
        bool ans=false;
        for (int i = 0; i < n; i++)
        {
            int curr=v[i].first-start;
            if(curr>=s){
                ans=true;
                break;
            }
            else{
                start=v[i].second;
            }
        }
        if(!ans)
            if(m-v[n-1].second>=s){
                ans=true;
            }
        if(ans)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}