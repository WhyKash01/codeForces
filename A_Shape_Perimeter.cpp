
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
    return a.first < b.first;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin>>n>>m;
        vector<pair<ll,ll>> v;
        for (int i = 0; i < n; i++)
        {
            pair<ll,ll>p;
            cin>>p.first>>p.second;
            v.push_back(p);
        }
        vector<pair<ll,ll>> s;
        
        
        
        ll xsum=0,ysum=0;
        
        for (int i = 0; i < n; i++)
        {
            if(xsum==0&&ysum==0){
                xsum+=m;
                ysum+=m;
            }
            else if(v[i].first<=m&&v[i].second<=m){
                xsum+=v[i].first;
                ysum+=v[i].second;
            }
            else{
                pair<ll,ll> p={xsum,ysum};
                s.push_back(p);
                xsum=0,ysum=0;
            }
        }
        pair<ll,ll> p={xsum,ysum};
        s.push_back(p);
        ll ans=0;
        for (int i = 0; i < s.size(); i++)
        {
            ans+=(s[i].first+s[i].second)*2;
        }
        cout<<ans<<endl;
    }
    return 0;
}