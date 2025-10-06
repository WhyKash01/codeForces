

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
        string a,b;
        cin>>a>>b;
        ll ans=0;
        for (int i = 0; i < b.size(); i++)
        {
            ll x=0,index=i;
            for (int j = 0; j < a.size(); j++)
            {
                if(a[j]==b[index]){
                    x++;
                    index++;
                }
            }
            ans=max(ans,x);
        }
        cout<<a.size()+b.size()-ans<<endl;
    }
    return 0;
}
