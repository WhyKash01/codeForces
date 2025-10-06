
        
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
        ll x,y,ax,ay,bx,by;
        cin>>x>>y>>ax>>ay>>bx>>by;
        auto distance=[](int ax,int ay,int bx,int by){
            int a=abs(ax-bx);
            int b=abs(ay-by);
            double ans=sqrt(a*a+b*b);
            return ans;
        };
        double ap=distance(x,y,ax,ay),bp=distance(x,y,bx,by),a0=distance(0,0,ax,ay),b0=distance(0,0,bx,by);
        if(a0>b0){
            swap(a0,b0);
            swap(ap,bp);
        }
        double ab=(double)distance(ax,ay,bx,by)/2;
        if(ap<=bp){
            cout<<setprecision(7)<<max(ap,a0)<<endl;
        }
        else if(bp>=b0||bp>=ab){
            cout<<setprecision(7)<<max(bp,a0)<<endl;
        }
        else{
            cout<<setprecision(7)<<max(ab,a0)<<endl;
        }
    }
    return 0;
}