#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
#define int long long
#define pii pair<int, int>
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
int M = 1000000007;

void solve()
{
    int n;
    cin >> n;
    multiset<int> a, b;
    for (int i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        int x, y;
        cin >> x >> y;
        if (c == '+')
        {
            a.insert(x);
            b.insert(y);
            int e = *a.rbegin();
            if (*b.begin() < e)
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
        else
        {
            a.erase(a.find(x));
            b.erase(b.find(y));
            if (!a.empty())
            {
                int e = *a.rbegin();
                if (*b.begin() < e)
                {
                    cout << "YES\n";
                }
                else
                {
                    cout << "NO\n";
                }
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;

    while (t--)
    {
        solve();
    }
}