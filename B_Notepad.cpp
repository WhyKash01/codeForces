#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; cin >> n;
        set<string> st;
        string s; cin >> s;
        s = ' ' + s;
        bool flag = false;
        for (int i = 1; i <= n - 1; i ++ ) {
            if (st.count(s.substr(i, 2))) flag = true;
            st.insert(s.substr(i - 1, 2));
        }
        cout << (flag ? "YES" : "NO") << endl;
    }
}
