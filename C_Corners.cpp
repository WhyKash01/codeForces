#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b) {
    return a > b;
}

int Ceil(int x, int y) {
    return ceil(static_cast<double>(x) / y);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<string> a(n);
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < n; i++) {
            cnt += count(a[i].begin(), a[i].end(), '1');
        }

        bool ans = false;

        for (int i = 0; i < n-1; i++) {
            if(ans){
                break;
            }
            for (int j = 0; j < m-1; j++) {
                if(ans){
                    break;
                }
                int x=0;
                a[i][j]=='0'?x++:x+=0;
                a[i][j+1]=='0'?x++:x+=0;
                a[i+1][j]=='0'?x++:x+=0;
                a[i+1][j+1]=='0'?x++:x+=0;
                if(x>1){
                    ans=true;
                    break;
                }
            }
        }

        if (cnt == m * n) {
            cout << cnt - 2 << endl;
        } else if (ans) {
            cout << cnt << endl;
        } else {
            cout << cnt - 1 << endl;
        }
    }
}
