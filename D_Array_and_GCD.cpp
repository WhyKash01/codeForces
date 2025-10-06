#include <bits/stdc++.h>
using namespace std;

#define int long long
#define vi vector<int>
#define all(v) (v).begin(), (v).end()

vector<int> sievePrimes(int n) {
    int limit = n * (log(n) + log(log(n))) + 100;
    vector<bool> isPrime(limit + 1, true);
    vector<int> primes;

    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i <= limit && primes.size() < n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
            if (1LL * i * i <= limit) {
                for (long long j = 1LL * i * i; j <= limit; j += i)
                    isPrime[j] = false;
            }
        }
    }

    return primes;
}

void solve(const vector<int>& v) {
    int n;
    cin >> n;
    vi a(n);
    for (auto &x : a) cin >> x;

    sort(all(a));
    vi z;
    int x = 0, coin = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] >= v[x]) {
            coin += a[i] - v[x];
            x++;
        } else {
            z.push_back(a[i]);
        }
    }

    int k = z.size();
    for (int i = z.size() - 1; i >= 0; i--) {
        if (coin >= v[x] - z[i]) {
            coin -= v[x] - z[i];
            x++;
            k--;
        } else {
            break;
        }
    }

    cout << k << "\n";
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<int> v = sievePrimes(400005);

    while (t--) {
        solve(v);
    }

    return 0;
}
