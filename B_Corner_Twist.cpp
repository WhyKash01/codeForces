

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
        int n,m;
        cin>>n>>m;
        string a[n],b[n];
        
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        bool ans=true;
        for (int i = 0; i < n; i++)
        {
            ll sum=0;
            for (int j = 0; j < m; j++)
            {
                int x=int(b[i][j])-48;
                int y=int(a[i][j])-48;
                sum+=(x-y+3)%3;
            }
            if(sum%3!=0){
                ans=false;
            }
        }
        for (int i = 0; i < m; i++)
        {
            ll sum=0;
            for (int j = 0; j < n; j++)
            {
                int x=int(b[j][i])-48;
                int y=int(a[j][i])-48;
                sum+=(x-y+3)%3;
            }
            if(sum%3!=0){
                ans=false;
            }
        }
        (ans)?cout<<"YES"<<endl:cout<<"NO"<<endl;
    }
    return 0;
}
