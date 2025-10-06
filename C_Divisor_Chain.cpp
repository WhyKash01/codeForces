#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
        cin >> n;
        int p;
        vector<int> ans;
        ans.push_back(n);
        for (int i = 0; ; ++i) {
            if ((n>>i)&1) {
                if (n == (1 << i)) {
                    p = i;
                    break;
                }
                n -= (1 << i);
                ans.push_back(n);
            }
        }
        while (p > 0) {
            n -= (1 << (p - 1));
            ans.push_back(n);
            --p;
        }
        cout << ans.size() << endl;
        for (int y : ans) {
            cout << y << " ";
        }
        cout << endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}