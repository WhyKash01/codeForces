#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k;cin >> n>>k;
    ll last[k + 1];
    ll fir[k + 1];
    memset(last, -1, sizeof(last));
    memset(fir, 1e6, sizeof(fir));
    ll arr[n];
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    for (int i = n - 1; i >= 0; i--)
    {
        fir[arr[i]] = i;
    }
    for (int i = 0; i < n; i++)
    {
        last[arr[i]] = i;
    }

    for (int i = k - 1; i >= 1; i--)
    {

        fir[i] = min(fir[i], fir[i + 1]);
        last[i] = max(last[i], last[i + 1]);
    }

    for (int i = 1; i <= k; i++)
    {
        if (s.count(i))
        {
            cout << 2 * (last[i] - fir[i] + 1) << " ";
        }
        else
        {
            cout << 0 << " ";
        }
    }
    cout << endl;

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