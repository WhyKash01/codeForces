#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;
        int arr[n];
        unordered_map < int, int > mp;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        vector < int > st;
        for (auto i: mp) {
            st.push_back(i.second);
        }
        sort(st.begin(), st.end());
        int sz = st.size();
        long long int ans = 0;
        long long int sum = 0;
        int cnt = 0;
        for (int i = sz - 1; i >= 0; i--) {
            sum = sum + st[i];
            cnt++;
            int md = sum % cnt;
            if (sum - cnt >= md) {
                ans = max(ans, sum - md);
            }
        }
        cout << ans << endl;
    }
}