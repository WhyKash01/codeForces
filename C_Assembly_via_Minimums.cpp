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
        int n;
        cin >> n;
        int l=n*(n-1)/2;
        unordered_map<int,int,custom_hash>m;
        set<int> s;
        for (int i = 0; i < l; i++)
        {
            int x;
            cin>>x;
            s.insert(x);
            m[x]++;
        }
        int j=0;
        vector<int> ans;
        int max=*--s.end();
        for (int i = n-1; i >= 1; i--)
        {
            int last=0;
            auto itr=s.begin();
            while(m[*itr]<i){
                itr++;
                last++;
            }
            m[*itr]-=i-last;
            ans.push_back(*itr);
            if(m[*itr]==0){
                s.erase(*itr);
            }
        }
        ans.push_back(max);
        for (int i = 0; i < n; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}