#include <bits/stdc++.h>

using namespace std;


long long solve(int N, long long K, vector<long long> A) {
    
    if (A.empty()) {
        return 0; 
    }

    long long Max = *max_element(A.begin(), A.end());
    long long Min = *min_element(A.begin(), A.end());
    long long diff = Max - Min;
    long long reduction = 2 * K;
    
    if (diff <= reduction) {
        return 0;
    } else {
        return diff - reduction;
    }
}
