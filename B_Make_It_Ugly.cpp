

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
        ll n;
        cin>>n;
        vector<ll>v;
        map<ll,ll>m;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            m[x]++;
            v.push_back(x);
        }
        ll Max=0,ele;
        for(auto i:m){
            if(Max<i.second){
                ele=i.first;
                Max=i.second;
            }
        }
        if(Max==n){
            cout<<-1<<endl;
        }
        else{
            vector<ll> ans;
            ans.push_back(0);
            for (int i = 0; i < n; i++)
            {
                if(v[i]!=ele){
                    ans.push_back(i);
                }
            }
            ans.push_back(n-1);
            ll x=n;
            for (int i = 0; i < ans.size()-1; i++)
            {
                if(i==0||i==ans.size()-2){
                x=min(x,ans[i+1]-ans[i]);
                }
                else{
                    x=min(x,ans[i+1]-ans[i]-1);
                }
            }
            cout<<x<<endl;
        }
    }
    return 0;
}