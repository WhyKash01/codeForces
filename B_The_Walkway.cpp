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
    int l,x,d;
    cin >> l>>x>>d;
    int a[x+1];
    for (int i = 0; i < x; i++)
    {
        cin >> a[i];
    }
    a[x]=l+1;
    int count = 1;
    int last = 1;
    int anscount = 0;
    for (int i = 0; i < x; i++)
    {
        if (a[i] == 1)
        {
            continue;
        }
        int midway = (a[i] - last - 1) / d;
        int nextway = (a[i + 1] - a[i] - 1) / d;
        int elim = (a[i + 1] - last - 1) / d;
        if (elim == (midway + nextway))
        {
            anscount++;
        }
        count = count + midway + 1;
        if (i == (x - 1))
        {
            count += nextway;
        }
        last = a[i];
    }
    if (anscount != 0)
    {
        count--;
        cout << count << " " << anscount << endl;
    }
    else
    {
        cout << count << " " << x << endl;
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