#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll M=998244353;
void upd(int &a, int b) {
    a = (a * 1LL * b) % M;
}

void solve()
{
    string s;
    cin >> s;
    char c = 'x';
    int cnt = 1, ans = 1, f = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != c)
        {
            c = s[i];
            upd(ans,cnt);
            cnt = 1;
        }
        else
        {
            f++;
            cnt++;
        }
    }
    
    upd(ans,cnt);
    for (int i = 1; i <= f; i++)
    {
        upd(ans,i);
    }
    
    cout << f << " " << ans%M << endl;
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