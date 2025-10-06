
        
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

const ll M = 1000000007;

bool comp(pair<int, ll> a, pair<int, ll> b) {
    if (a.first == b.first) {
        return a.second < b.second;
    }
    return a.first > b.first;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin>>n;
        vector<vector<char>>a(n,vector<char>(n));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin>>a[i][j];
            }
        }
        auto calculate=[](vector<vector<char>>& a,int i,int j){
            ll n=a[0].size();
            char w=a[i][j],x=a[n-j-1][i],y=a[j][n-i-1],z=a[n-i-1][n-j-1];
            multiset<char> s;
            s.insert(w);
            s.insert(x);
            s.insert(y);
            s.insert(z);
            char max=*s.rbegin();
            s.erase(max);
            int sum=0;
            for(auto i:s){
                sum+=max-i;
            }
            return sum;
        };
        ll ans=0;
        for (int i = 0; i < n/2; i++)
        {
            for (int j = i; j < n-i-1; j++)
            {
                ans+=calculate(a,i,j);
            }
            
        }
        cout<<ans<<endl;
        
    }
    return 0;
}