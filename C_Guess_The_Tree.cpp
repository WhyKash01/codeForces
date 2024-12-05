#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

int query(int a, int b) {
    cout << "? " << a << " " << b << endl;
    cout.flush();
    int response;
    cin >> response;
    return response;
}

void solve(int n) {
    vector<pair<int, int>> edges;

    vector<int> parent(n + 1, -1);

    for (int i = 2; i <= n; ++i) {
        int p = query(1, i);
        parent[i] = p;
        edges.push_back({p, i});
    }

    for (int i = 2; i <= n; ++i) {
        for (int j = i + 1; j <= n; ++j) {
            int p = query(i, j);
            if (p == i) {
                edges.push_back({i, j});
                parent[j] = i;
            } else if (p == j) {
                edges.push_back({j, i});
                parent[i] = j;
            }
        }
    }

    cout << "! ";
    for (auto& edge : edges) {
        cout << edge.first << " " << edge.second << " ";
    }
    cout << endl;
    cout.flush();
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}