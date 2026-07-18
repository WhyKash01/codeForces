#include <bits/stdc++.h>
#pragma GCC optimize("O3")
using namespace std;
#define int long long
const int N = 1e6 + 10;
const int inf = 1e15;
const int mod = 998244353;

inline void solve(){
    
    int n;cin >> n;

    vector<vector<int>> v(n);

    vector<int> all;

    for(int i = 0;i < n;i += 1){
        int m;cin >> m;

        vector<int> a(m);

        for(auto &x : a) cin >> x;

        reverse(a.begin(), a.end());

        set<int> st;
        for(auto &x : a){

            all.push_back(x);

            if(st.find(x)==st.end()){
                st.insert(x);
                v[i].push_back(x);
            }
        }
    }

    sort(all.begin(), all.end());
    all.erase(unique(all.begin(), all.end()), all.end());

    auto id = [&](int cur){
        return lower_bound(all.begin(), all.end(), cur) - all.begin();
    };
    
    vector<int> vis(n), ans;
    set<int> st;

    for(int k = 0; k < n;k += 1){
        int ind = -1;
        vector<int> best;

        for(int i = 0;i < n;i += 1){
            if(vis[i]) continue;

            vector<int> cur;
            for(auto &x : v[i]){
                if(st.find(x)==st.end()){
                    cur.push_back(x);
                }
            }

            if(ind == -1 || best > cur){
                best = cur;
                ind = i;
            }
        }

        if(ind != -1){
            vis[ind] = 1;

            for(auto &x : best){
                ans.push_back(x);
                st.insert(x);
            }
        }
    }

    for(auto &x : ans) cout << x << ' ';
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;
    while(t--){
        solve();
        cout << '\n';
    }
    return 0;
}
