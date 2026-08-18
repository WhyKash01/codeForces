#include <bits/stdc++.h>
using namespace std;

#define LCM(a, b) ((a) * ((b) / std::__gcd(a, b)))
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
#define sz(v) (int)v.size()
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 1e9 + 7;
int inf = LLONG_MAX;

void solve()
{
    int n, k;
    cin >> n >> k;
    string s(n,'a');
    int x = 0;
    vi v1(n);
    vi v2(n);
    set<int> st;
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> v2[i];
    }
    for (int i = 0; i < n; i++)
    {

        s[v1[i] - 1] = c;
        if (st.find(v1[i]) == st.end())
        {
            st.insert(v1[i]);
        }
        else
        {
            st.erase(v1[i]);
        }
        if (st.find(v2[i]) == st.end())
        {
            st.insert(v2[i]);
        }
        else
        {
            st.erase(v2[i]);
        }
        if (st.size() == 0)
        {
            x++;
            if (x < k)
            {
                c++;
            }
        }
    }
    if (x >= k)
    {
        cout << "YES\n";
        cout << s << endl;
    }
    else
    {
        cout << "NO\n";
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}