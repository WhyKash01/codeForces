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

int a[1005][1005];
int pref[1005][1005];

void solve()
{
    int n, q;
    cin >> n >> q;
    for(int i = 0; i <= 1001; i++)
    {
        for(int j = 0; j <= 1001; j++)
        {
            a[i][j] = pref[i][j] = 0;
        }
    }
    for(int i = 0; i < n; i++)
    {
        int h, w;
        cin >> h >> w;
        a[h][w]+=h*w;
    }
    for(int i = 1; i <= 1000; i++)
    {
        for(int j = 1; j <= 1000; j++)
        {
            pref[i][j] = pref[i-1][j]+pref[i][j-1]-pref[i-1][j-1]+a[i][j];
        }
    }
    for(int i = 0; i < q; i++)
    {
        int hs, ws, hb, wb;
        cin >> hs >> ws >> hb >> wb;
        cout << pref[hb-1][wb-1]-pref[hb-1][ws]-pref[hs][wb-1]+pref[hs][ws] << endl;
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
