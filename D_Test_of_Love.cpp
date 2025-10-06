
#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int Floor(int x, int y)
{
    return floor(static_cast<double>(x) / y);
}
const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first > b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n,x,y;
        cin>>n>>x>>y;
        string s;
        cin>>s;
        s="L"+s+"L";
        ll land=0,curr=0,c=0;
        bool ans=true;
        vector<ll> logs;
        for (int i = 0; i < n+2; i++)
        {
            if(s[i]=='L'){
                logs.push_back(i);
            }
        }
        ll i=0,nl=1;
        while(i<n+2){
            if(x>=logs[nl]-i&&nl<logs.size()){
                if(logs[nl]==n+2){
                    break;
                }
                i=logs[nl];
            }
            else{
                i+=x;
                if(i>=n+2){
                    break;
                }
                while(i<n+2&&i<logs[nl]){
                    if(s[i]=='C'||y<=0){
                        ans=false;
                        break;
                    }
                    else{
                        y--;
                    }
                    i++;
                }
            }
            nl++;
        }
        (ans)?cout<<"YES"<<endl:cout<<"NO"<<endl;
        
    }
    return 0;
}