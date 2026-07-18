#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
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
int MOD = 1e9 + 7;

void solve()
{
    int h, w, x1, x2, y1, y2;
    cin >> h >> w >> x1 >> y1 >> x2 >> y2;

    if (x1 >= x2)
    {
        cout<<"Draw\n";
    }
    else
    {
        int z = x2 - x1;
        int a1 = min(w, y1 + (z + 1) / 2), a2 = max(1LL, y1 - (z + 1) / 2);
        int b1 = min(w, y2 + z / 2), b2 = max(1LL, y2 - z / 2);
        // cout<<a1<<" "<<a2<<" - "<<b1<<" "<<b2<<endl;
        if (z % 2 == 1)
        {
            if (a1 >= b1 && a2 <= b2)
            {
                cout << "Alice\n";
            }
            else
            {
                cout<<"Draw\n";
            }
        }
        else
        {
            if (b1 >= a1 && b2 <= a2)
            {
                cout << "Bob\n";
            }
            else
            {
                cout<<"Draw\n";
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}