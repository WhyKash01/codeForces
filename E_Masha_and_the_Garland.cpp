#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define pip pair<int, pair<int, int>>
#define ppi pair<pair<int, int>, int>
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
int MOD = 1e9 + 7;

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            s1.push_back('0');
            s2.push_back('1');
        }
        else
        {
            s2.push_back('0');
            s1.push_back('1');
        }
    }
    int pref1[n + 1];
    int pref2[n + 1];
    pref1[0] = 0;
    pref2[0] = 0;
    pref1[1] = 0;
    pref2[1] = 0;

    for (int i = 1; i < n; i++)
    {
        if (s[i] != s1[i] && s[i - 1] == s1[i - 1])
        {
            pref1[i + 1] = pref1[i] + 1;
        }
        else
        {
            pref1[i + 1] = pref1[i] + 0;
        }
        if (s[i] != s2[i] && s[i - 1] == s2[i - 1])
        {
            pref2[i + 1] = pref2[i] + 1;
        }
        else
        {
            pref2[i + 1] = pref2[i] + 0;
        }
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, z;
        cin >> l >> r >> z;
        int t1, t2;
        if (s[l - 1] != s1[l - 1])
        {
            t1 = pref1[r] - pref1[l] + 1;
        }
        else
        {
            t1 = (pref1[r] - pref1[l]);
        }
        if (s[l - 1] != s2[l - 1])
        {
            t2 = pref2[r] - pref2[l] + 1;
        }
        else
        {
            t2 = pref2[r] - pref2[l];
        }
        if (t1 <= z || t2 <= z)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}