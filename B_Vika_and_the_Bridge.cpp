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
        int n, k;
        cin >> n >> k;
        vector<int> c(n);
        for (int i = 0; i < n; ++i) {
            cin >> c[i];
        }
        vector<int> last(k, -1);
        vector<int> max_step(k), max2_step(k);
        for (int i = 0; i < n; ++i) {
            int step = i - last[c[i] - 1];
            if (step > max_step[c[i] - 1]) {
                max2_step[c[i] - 1] = max_step[c[i] - 1];
                max_step[c[i] - 1] = step;
            } else if (step > max2_step[c[i] - 1]) {
                max2_step[c[i] - 1] = step;
            }
            last[c[i] - 1] = i;
        }
        for (int i = 0; i < k; ++i) {
            int step = n - last[i];
            if (step > max_step[i]) {
                max2_step[i] = max_step[i];
                max_step[i] = step;
            } else if (step > max2_step[i]) {
                max2_step[i] = step;
            }
        }
        int ans = 1e9;
        for (int i = 0; i < k; ++i) {
            ans = min(ans, max((max_step[i] + 1) / 2, max2_step[i]));
        }
        cout << ans - 1 << "\n";
    }
    return 0;
}
