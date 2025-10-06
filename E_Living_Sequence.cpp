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
    int x;
    cin >> x;
    int y = x;
    int arr[14];
    int crr[14];

    int last = 0;
    for (int i = 0; i < 14; i++)
    {

        arr[i] = x % 9;
        x = x / 9;
        if (x == 0)
        {
            last = i;
            break;
        }
    }

    for (int i = last; i >= 0; i--)
    {
        if (arr[i] > 3)
        {
            arr[i] = arr[i] + 1;
        }
        cout << arr[i];
    }
    cout << endl;
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