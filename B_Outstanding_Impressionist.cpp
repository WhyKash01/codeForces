#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        int m = 2 * n + 1;  
        vector<int> sum(m, 0), cnt(m, 0);
        vector<pair<int, int>> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i].first >> a[i].second;
            if (a[i].first == a[i].second) {
                sum[a[i].first] = 1;
                cnt[a[i].first]++;
            }
        }

        for (int i = 1; i < m; i++) {
            sum[i] += sum[i - 1];
        }

        string s;
        for (int i = 0; i < n; i++) {
            if (a[i].first == a[i].second) {
                s.push_back(cnt[a[i].first] <= 1 ? '1' : '0');
            } else {
                int r = sum[a[i].second] - sum[a[i].first - 1];
                if (a[i].second - a[i].first + 1 > r) {
                    s.push_back('1');
                } else {
                    s.push_back('0');
                }
            }
        }

        cout << s << endl;
    }
    return 0;
}
