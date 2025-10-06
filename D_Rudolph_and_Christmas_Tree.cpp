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
        int n, d, h;
        cin >> n >> d >> h;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        double sum=0.0;
        for (int i = 0; i < n-1; i++)
        {
            double z=(double)min(h*1ll,a[i+1]-a[i]);
            z=h-z;
            double l=(double)d/h*z;
            double base=(double)d;
            double hight=(double)h-z;
            sum+=((double)(l+base)/2)*(hight);
            
        }
        sum+=d*(double)h/2;
        cout << fixed << setprecision(6) << sum << endl;
    }
    return 0;
}
