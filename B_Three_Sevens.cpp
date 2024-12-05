#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;

ll binary_expo(ll a, ll b) {
    if (b == 0) {
        return 1;
    }
    ll res = binary_expo(a, b / 2);
    if (b & 1) {
        return a * res * res;
    } else {
        return res * res;
    }
}

int ceil_div(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int m;
        cin >> m;
        vector<vector<int>> a(m);
        vector<int> last(5e4 + 1, -1);
        for(int i = 0;i < m;i++){
            int n;
            cin >> n;
            a[i].resize(n);
            for(int j = 0;j < n;j++){
                cin >> a[i][j];
                last[a[i][j]] = i;
            }
        }
 
        vector<int> cnt(m, 0);
 
        for(int i = 0;i < m;i++){
            for(int j = 0;j < (int)a[i].size();j++){
                cnt[last[a[i][j]]] = a[i][j];
            }
        }
        bool yes = true;
        for(int i = 0;i < m;i++){
            if(!cnt[i]){
                yes = false;
                break;
            }
        }
 
        if(!yes){
            cout << -1 << "\n";
        }else{
            for(int i = 0;i < m;i++){
                cout << cnt[i] << " \n"[i == m - 1];
            }
        }
    }
}
