#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
const int INF = 1e9;
int n, m;
vector<string> grid;
vector<vector<int>> m_dist;
vector<vector<int>> p_dist;
vector<vector<char>> parent_move; // Stores 'U', 'D', 'L', 'R' to reconstruct path
vector<vector<pii>> parent_pos;   // Stores previous cell coordinates

// Direction arrays: U, R, D, L
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
char moves[4] = {'U', 'R', 'D', 'L'};

bool isValid(int x, int y) {
    return x >= 0 && x < n && y >= 0 && y < m && grid[x][y] != '#';
}

void solve() {
    cin >> n >> m;
    grid.resize(n);
    m_dist.assign(n, vector<int>(m, INF));
    p_dist.assign(n, vector<int>(m, -1));
    parent_move.assign(n, vector<char>(m, 0));
    parent_pos.assign(n, vector<pii>(m, {-1, -1}));

    queue<pii> q;
    pii start_pos;

    // 1. Initialize Monster BFS
    // Find all monsters and add them to the queue first
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == 'M') {
                q.push({i, j});
                m_dist[i][j] = 0;
            } else if (grid[i][j] == 'A') {
                start_pos = {i, j};
            }
        }
    }

    // Run BFS for Monsters
    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            if (isValid(nx, ny) && m_dist[nx][ny] == INF) {
                m_dist[nx][ny] = m_dist[x][y] + 1;
                q.push({nx, ny});
            }
        }
    }

    // 2. Initialize Player BFS
    q.push(start_pos);
    p_dist[start_pos.first][start_pos.second] = 0;

    pii end_pos = {-1, -1};

    // Run BFS for Player
    while (!q.empty()) {
        pii curr = q.front();
        q.pop();
        int x = curr.first;
        int y = curr.second;

        // Check if we are at the boundary
        if (x == 0 || x == n - 1 || y == 0 || y == m - 1) {
            end_pos = {x, y};
            break;
        }

        for (int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];

            // Player can move if:
            // 1. Cell is valid and not a wall
            // 2. Not visited by player yet
            // 3. Player arrives strictly SOONER than the monster
            if (isValid(nx, ny) && p_dist[nx][ny] == -1) {
                if (p_dist[x][y] + 1 < m_dist[nx][ny]) {
                    p_dist[nx][ny] = p_dist[x][y] + 1;
                    parent_move[nx][ny] = moves[i];
                    parent_pos[nx][ny] = {x, y};
                    q.push({nx, ny});
                }
            }
        }
    }

    // 3. Output Result
    if (end_pos.first != -1) {
        cout << "YES" << endl;
        string path = "";
        pii curr = end_pos;
        
        // Backtrack path
        while (curr != start_pos) {
            path += parent_move[curr.first][curr.second];
            curr = parent_pos[curr.first][curr.second];
        }
        reverse(path.begin(), path.end());
        
        cout << path.length() << endl;
        cout << path << endl;
    } else {
        cout << "NO" << endl;
    }
}

signed main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    solve();
    return 0;
}