#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b) {
    return a > b;
}

int Ceil(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        ll n, q;
        cin >> n >> q;
        vector<ll> a(n), b(q);
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < q; i++) {
            cin >> b[i];
        }
        unordered_map<ll, ll> m;
        for (int i = 0; i < n; i++) {
            ll ans = i * (n - i) + (n - i - 1);
            m[ans]++;
            if (i < n - 1) {
                ll diff = a[i + 1] - a[i];
                if (diff > 0) {
                    m[(i + 1) * (n - i - 1)] += (diff - 1);
                }
            }
        }

        for (int i = 0; i < q; i++) {
            cout << m[b[i]] << " ";
        }
        cout << endl;
    }
}
