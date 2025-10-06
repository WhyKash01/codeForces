
        
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
        ll n, m, k;
        cin >> n >> m >> k;
        if(k>3){
            cout<<0<<endl;
        }
        else if(k==3){
            if(m<=n){
                cout<<0<<endl;
            }
            else{
            ll x=m-n;
            x-=m/n-1;
            cout<<x<<endl;
            }
        }
        else if(k==2){
            if(m<=n){
                cout<<m<<endl;
            }
            else{
                ll y=n+m/n-1;
                cout<<y<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}