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

void solve() {
    vector<pair<int, int>> edges;
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        int j=1;
        while(true){
            int x=query(j,i);
            if(x==i||x==j){
                edges.push_back({j,i});
                break;
            }
            j=x;
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
        solve();
    }
    return 0;
}