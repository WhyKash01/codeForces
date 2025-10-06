#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }

    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
        cin>>n>>m;
        vector<ll> v;
        unordered_map<ll,ll,custom_hash> map;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            if(map[x]==0){
                v.push_back(x);
            }
            map[x]++;
        }
        sort(v.begin(),v.end());
        ll z=0;
        int last=0;
        ll ans=0;
        for (int i = 0; i < v.size(); i++)
        {
            if(i==0||v[i]-1!=v[i-1]){
                z=map[v[i]];
                last=i;
            }
            else{
                if(i-last<m){
                    z+=map[v[i]];
                }
                else{
                    z-=map[v[last]];
                    last++;
                    z+=map[v[i]];
                }
            }
            ans=max(ans,z);
        }
        cout<<ans<<endl;
    }
}