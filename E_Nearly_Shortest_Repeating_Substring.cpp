#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

long long solve(int n, long long k, vector<long long> arr) {
    priority_queue<long long> maxHeap;
    priority_queue<long long, vector<long long>, greater<long long>> minHeap;
    for (long long num : arr) {
        maxHeap.push(num);
        minHeap.push(num);
    }
    for (int operation = 0; operation < k; operation++) {
        long long maxValue = maxHeap.top();
        long long minValue = minHeap.top();
        if (maxValue - minValue <= 1) {
            break;
        }
        maxHeap.pop();
        minHeap.pop();
        maxHeap.push(maxValue - 1);
        minHeap.push(minValue + 1);
        maxHeap.push(minValue + 1);
        minHeap.push(maxValue - 1);
    }
    
    return maxHeap.top() - minHeap.top();
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        
        vector<long long> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        cout << solve(n, k, arr) << endl;
    }
    
    return 0;
}