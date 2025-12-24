#include <bits/stdc++.h>

using namespace std;

vector<int> bfs(int N, const vector<vector<int>>& adj, int start_node) {
    vector<int> dist(N + 1, -1); 
    queue<int> q;
    q.push(start_node);
    dist[start_node] = 0;
    while (!q.empty()) {
        int u = q.front();
        q.pop();

        for (int v : adj[u]) {
            if (dist[v] == -1) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}

int solve(int N, int K, vector<int> special_nodes, vector<int> node_from, vector<int> node_to) {
    vector<vector<int>> adj(N + 1);
    for (int i = 0; i < node_from.size(); ++i) {
        int u = node_from[i];
        int v = node_to[i];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> x = bfs(N, adj, 1);
    vector<int> z = bfs(N, adj, N);
    int mx = INT_MAX;
    int mz = INT_MAX;
    for (int special_node : special_nodes) {
        mx = min(mx, x[special_node]);
        mz = min(mz, z[special_node]);
    }
    
    int original_dist = x[N]; 
    int new_dist = mx + 1 + mz;
    return min(original_dist, new_dist);
}

// NOTE: Boilerplate for handling T test cases from the input format is omitted, 
// as the request was only for the solve function logic.
// The main function structure would typically be:
/*
int main() {
    int T;
    cin >> T;
    while (T--) {
        // Read N, K, special_nodes, node_from, node_to
        // ...
        // cout << solve(N, K, special_nodes, node_from, node_to) << endl;
    }
    return 0;
}
*/