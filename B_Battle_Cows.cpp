

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
        ll n,k;
        cin>>n>>k;
        vector<ll>v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll a=v[k-1],last=0,ans=0;
        for (int i = 0; i < n; i++)
        {
            if(v[i]>a){
                last=i;
                break;
            }
            else{
                ans++;
            }
        }
        v[k-1]=v[last];
        v[last]=a;
        ll b=0;
        if(last<k-1){

        for (int i = last; i < n; i++)
        {
            if(v[i]>a){
                last=i;
                break;
            }
            else{
                if(i!=0)
                    b++;
            }
        }
        }
        cout<<max((ans-1),b)<<endl;
    }
    return 0;
}