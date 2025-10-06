

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
        set<ll>s;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            s.insert(x);
        }
        ll ans=1,k=1,curr=0;
        auto it=s.begin();
        for (auto i = s.begin(); i != s.end(); i++)
        {
            if(it==s.end()){
                break;
            }
            while(it!=s.end()){
                if(*it-*i>=n){
                    break;
                }
                it++;
                curr++;
            }
            ans=max(ans,curr);
            curr--;
        }
        cout<<ans<<endl;
    }
    return 0;
}