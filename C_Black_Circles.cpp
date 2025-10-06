
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
ll dis(int x1, int y1, int x2, int y2) {
    return 1ll * (x2 - x1) * (x2 - x1) + 1ll * (y2 - y1) * (y2 - y1);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<pair<ll,ll>> p;
        for (int i = 0; i < n; i++)
        {
            pair<ll,ll> x;
            cin>>x.first>>x.second;
            p.push_back(x);
        }
        bool f=true;
        ll x0,y0,xf,yf;
        cin>>x0>>y0>>xf>>yf;
        ll diss=dis(x0,y0,xf,yf);
        for (int i = 0; i < n; i++)
        {
            ll d=dis(p[i].first,p[i].second,xf,yf);
            if(d<=diss){
                f=false;
                break;
            }
        }
        f?cout<<"YES\n":cout<<"NO\n";
    }
    return 0;
}