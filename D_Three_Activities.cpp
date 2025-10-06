

#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

struct custom_hash
{
    static uint64_t splitmix64(uint64_t x)
    {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const
    {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};

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
        ll n;
        cin>>n;
        vector<pair<ll,ll>> a,b,c;
        for (int i = 0; i < n; i++){
            ll x;
            cin>>x;
            a.push_back({x,i});
        }
        for (int i = 0; i < n; i++){
            ll x;
            cin>>x;
            b.push_back({x,i});
        }
        for (int i = 0; i < n; i++){
            ll x;
            cin>>x;
            c.push_back({x,i});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        sort(c.begin(),c.end());
        reverse(a.begin(),a.end()); 
        reverse(b.begin(),b.end()); 
        reverse(c.begin(),c.end()); 
        ll ans=0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                for (int k = 0; k < 3; k++)
                {
                    if(a[i].second!=b[j].second&&a[i].second!=c[k].second&&b[j].second!=c[k].second){
                        ans=max(ans,a[i].first+b[j].first+c[k].first);
                    }
                }
            }
            
        }
        cout<<ans<<endl;
    }
    return 0;
}