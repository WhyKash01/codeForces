#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;




int dfs(vector<vector<int>> &gh, vector<bool> &visit, int &ans, string &s, int v=0)
{
    int curr = (s[v] == 'W') - (s[v] == 'B');
 
    visit[v] = true;
    for (auto e : gh[v])
        if (!visit[e])
            curr += dfs(gh, visit, ans, s, e);
 
    if (curr == 0)
        ++ans;
 
    return curr;
}
void solve()
{
    int n;
    cin >> n;
    vector<vector<int>> gh(n);
    for (int i = 1; i < n; ++i)
    {
        int a;
        cin >> a;
        gh[i].push_back(a-1);
        gh[a-1].push_back(i);
    }
 
    string s;
    cin >> s;
 
    int ans = 0;
    vector<bool> visit(n, false);
    
    dfs(gh, visit, ans, s);
 
    cout << ans << '\n';
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