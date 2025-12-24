#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long
#define MOD 1000000007
#define int long long
const int T = 5 * 1e5 + 10;
#define pii pair<int, int>
// #define MOD 998244353

int cnt[T];

void solve()
{

    int x,k;
    cin >>x>>k;
    for (int i = 1; i < k; i++)
    {
        cnt[i] = 0;
    }
    for (int i = 0; i < x; i++)
    {
        int curr;
        cin >> curr;
        cnt[curr]++;
    }
    for (int i = 1; i < k; i++)
    {
        cnt[i + 1] += cnt[i] / (i + 1);
        cnt[i] = cnt[i] % (i + 1);
        if (cnt[i] != 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    tt = 1;

    for (int o = 1; o <= tt; o++)
    {
        solve();
    }
    return 0;
}