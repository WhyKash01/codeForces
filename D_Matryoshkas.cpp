#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
}

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
        int n;
        cin>>n;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        unordered_map<ll, ll, custom_hash>m;
        vector<ll>v;
        for (int i = 0; i < n; i++)
        {
            if(m[a[i]]==0){
                v.push_back(a[i]);
            }
            m[a[i]]++;
        }
        int ans=0,curr=0;
        int ele=-1;
        for (int i = 0; i < v.size(); i++)
        {
            if(ele+1!=v[i]){
                curr=0;
            }
            if(m[v[i]]>curr){
                ans+=m[v[i]]-curr;
            }
                curr=m[v[i]];
            ele=v[i];
        }
        
        
        cout<<ans<<endl;
    }
}