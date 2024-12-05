#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n,x,y;
        cin>>n>>x>>y;
        vector<pair<int,int>> position;
        string steps;
        cin>>steps;
        ll a=0,b=0;
        bool ans=false;
        for (int i = 1; i <= n; i++)
        {
            if(steps[i-1]=='L'){
                a--;
            }
            else if(steps[i-1]=='R'){
                a++;
            }
            else if(steps[i-1]=='U'){
                b++;
            }
            else{
                b--;
            }
            ll d=abs(x-a)+abs(y-b);
            if(d<=(i)&&d%2==(i)%2){
                ans=true;
                break;
            }
        }
        
        
        if(ans){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        
    }
    return 0;
}