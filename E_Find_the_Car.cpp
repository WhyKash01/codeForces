#include <bits/stdc++.h>
using namespace std;
#define int long long

int minimizeDifference(vector<int>& A, long long K) {
    sort(A.begin(), A.end());
    int n = A.size();
    int l = 0, r = n - 1;

    while (l < r && K > 0) {
        // Count how many elements are equal from left/right
        int leftCount = l + 1;
        int rightCount = n - r;

        if (leftCount <= rightCount) {
            // Try to raise the left side
            int diff = A[l + 1] - A[l];
            long long cost = (long long)diff * leftCount;

            if (K >= cost) {
                K -= cost;
                l++;
            } else {
                A[l] += K / leftCount;
                K = 0;
            }
        } else {
            // Try to lower the right side
            int diff = A[r] - A[r - 1];
            long long cost = (long long)diff * rightCount;

            if (K >= cost) {
                K -= cost;
                r--;
            } else {
                A[r] -= K / rightCount;
                K = 0;
            }
        }
    }

    return A[r] - A[l];
}

int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        int N;
        long long K;
        cin >> N >> K;
        vector<int> A(N);
        for (int i = 0; i < N; i++) cin >> A[i];
        cout << minimizeDifference(A, K) << "\n";
    }
    return 0;
}
