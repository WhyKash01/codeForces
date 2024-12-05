#include <iostream>
#include <vector>
#define MOD 1000000007
using namespace std;

// Function to compute x^y % p in O(log y)
long long power(long long x, long long y, long long p) {
    long long res = 1; // Initialize result
    x = x % p; // Update x if it is more than or equal to p

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p; // Change x to x^2
    }
    return res;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> a(n);

        long long sum = 0, sum_sq = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum = (sum + a[i]) % MOD;
            sum_sq = (sum_sq + a[i] * a[i]) % MOD;
        }

        // Number of pairs
        long long pairs = (n * (n - 1) / 2) % MOD;

        // Calculate the sum of all products
        long long sum_products = ((sum * sum - sum_sq) % MOD + MOD) % MOD;
        sum_products = (sum_products * power(2, MOD - 2, MOD)) % MOD;

        // Calculate the expected value (P*Q^-1) % MOD
        long long result = (sum_products * power(pairs, MOD - 2, MOD)) % MOD;

        cout << result << endl;
    }

    return 0;
}
