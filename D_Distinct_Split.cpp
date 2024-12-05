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
        int n;
        string s;
        cin >> n >> s;
        vector<int> cnt(26, 0), p(26, 0);
        for (auto x : s)
            cnt[x - 'a']++;
        int ans = 0;
        for (auto x : s)
        {
            --cnt[x - 'a'];
            ++p[x - 'a'];
            int cur = 0;
            for (int i = 0; i < 26; ++i)
            {
                cur += min(1, cnt[i]) + min(1, p[i]);
            }
            ans = max(ans, cur);
        }
        cout << ans << "\n";
    }
}
