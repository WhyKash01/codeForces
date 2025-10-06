

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
        ll n,m,x;
        cin >> n>>m>>x;
        vector<pair<ll,char>>q;
        for (int i = 0; i < m; i++)
        {
            pair<ll,char> c;
            cin>>c.first>>c.second;
            q.push_back(c);
        }
        vector<set<ll>> v(m+1);
        v[0].insert(x);
        for (int i = 0; i < m; i++)
        {
            for (auto j = v[i].begin(); j != v[i].end(); j++)
            {
                if(q[i].second=='?'){
                    ll a=(n+*j+q[i].first)%n,b=(n+*j-q[i].first)%n;
                    if(b==0)
                        b=n;
                    if(a==0)
                        a=n;
                    v[i+1].insert(a);
                    v[i+1].insert(b);
                }
                else if(q[i].second=='1'){
                    ll b=(n+*j-q[i].first)%n;
                    if(b==0)
                        b=n;
                    v[i+1].insert(b);
                }
                else{
                    ll a=(n+*j+q[i].first)%n;
                    if(a==0)
                        a=n;
                    v[i+1].insert(a);
                }
            }
        }
        cout<<v[m].size()<<endl;
        for (auto i = v[m].begin(); i != v[m].end(); i++)
        {
            cout<<*i<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}