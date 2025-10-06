

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
        map<ll,ll>m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            s.insert(x);
            m[x]++;
        }
        bool ans=true;
        if(m[*s.begin()]==1){
            cout<<"YES"<<endl;
        }
        else{
            ans=false;
            for (auto i = s.begin(); i !=s.end(); i++)
            {
                if(i!=s.begin()){
                    if((*i%*s.begin()<*s.begin())&&(*i%*s.begin()!=0)){
                        ans=true;
                        break;
                    }
                }
            }
            if(ans){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}