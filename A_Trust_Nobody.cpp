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
        int a[n];
        unordered_map<ll,ll,custom_hash>m;
        vector<ll>v;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            if(m[a[i]]==0){
                v.push_back(a[i]);
            }
            m[a[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=0,sum=0;
        for (int i = 0; i < v.size(); i++)
        {
            if(n-sum-m[v[i]]>v[i]){
                sum+=m[v[i]];
                // cout<<v[i]<<" "<<m[v[i]]<<" "<<sum<<endl;
            }
            else if(n-sum-m[v[i]]==v[i]){
                sum+=m[v[i]];
                // cout<<v[i]<<" "<<m[v[i]]<<" "<<sum<<endl;
                break;
            }
            else if(n-sum>=v[i]){
                ans=-1;
                break;
            }
        }
        
        if(ans==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<n-sum<<endl;
        }
    }
}