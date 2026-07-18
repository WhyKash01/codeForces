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
    int n, k, z;
    cin >> n >> k >> z;
    vector<vector<int>> a(k, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            cin >> a[j][i];
        }
    }
    for (int i = 0; i < k; i++)
    {
        for (int j = 1; j < n; j++)
        {
            a[i][j] = a[i][j] | a[i][j - 1];
        }
    }
    for (int i = 0; i < z; i++)
    {
        int m;
        cin >> m;
        int l = 0, h = n - 1;
        for (int i = 0; i < m; i++)
        {
            int x, y;
            char c;
            cin >> x >> c >> y;
            if (c == '>')
            {
                int low=-1,high=n,mid;
                while(low+1!=high){
                    mid=(low+high)/2;
                    if(a[x-1][mid]<=y)low=mid;
                    else high=mid;
                }
                if(high>l){
                    l=high;
                }
            }
            else
            {
                int low=-1,high=n,mid;
                while(low+1!=high){
                    mid=(low+high)/2;
                    if(a[x-1][mid]<y)low=mid;
                    else high=mid;
                }
                if(low<h){
                    h=low;
                }
            }
        }
        if (l <= h)
        {
            cout << l + 1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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
}
