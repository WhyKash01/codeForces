
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
        ll n,x;
        cin>>n>>x;
        ll a[n];
        map<ll,ll>m;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            m[a[i]]++;
        }
        ll curr=0;
        for (int i = 0; i < n; i++)
        {
            if(m[curr]==0){
                break;
            }
            else{
                ll a=m[curr];
                m[curr+x]+=a-1;
                curr++;
            }
        }
        cout<<curr<<endl;
    }
    return 0;
}