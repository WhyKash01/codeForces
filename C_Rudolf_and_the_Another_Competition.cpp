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
        int n, m, k;
        cin >> n >> m >> k;

        vector<vector<int>> v(n, vector<int>(m));
        vector<vector<ll>> v1(n, vector<ll>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> v[i][j];
            }
        }

        for (int i = 0; i < n; i++) {
            sort(v[i].begin(), v[i].end());
        }

        for (int i = 0; i < n; i++) {
            ll sum = 0, sum1 = 0;
            for (int j = 0; j < m; j++) {
                sum += v[i][j];
                v[i][j] = sum; 
                v1[i][j] = v[i][j] + sum1; 
                sum1 += v[i][j];
            }
        }

        vector<pair<int, ll>> ans(n);
        for (int i = 0; i < n; i++) {
            int p = upper_bound(v[i].begin(), v[i].end(), k) - v[i].begin();
            if (p > 0) {
                ans[i] = {p, v1[i][p - 1]};
            } else {
                ans[i] = {0, 0};
            }
        }

        pair<int, ll> p = ans[0];
        sort(ans.begin(), ans.end(), comp);

        for (int i = 0; i < n; i++) {
            if (ans[i] == p) {
                cout << i + 1 << endl;
                break;
            }
        }
    }

    return 0;
}
