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
int M = 998244353;

void solve()
{
    int x;
    cin >> x;
    int k;
    cin >> k;
    pii arr[x];
    int brr[x];
    for (int i = 0; i < x; i++)
    {
        int t;
        cin >> t;
        arr[i] = {t, i};
    }

    sort(arr, arr + x);

    for (int i = 0; i < x; i++)
    {
        cin >> brr[i];
    }

    sort(brr, brr + x);

    int ans[x];
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        ans[arr[(i - k + x) % x].second] = brr[i];
        if (arr[(i - k + x) % x].first > brr[i])
        {
            count++;
        }
    }

    if (count == k)
    {
        cout << "YES" << endl;
        for (int i = 0; i < x; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
