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
    int n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    vector<char> a(n, '+');
    int l = 0, r = n - 1;
    int x = 0, y = 0, z = 0;
    for (int i = 0; i < m; i++)
    {
        if (s[i] == '1')
        {
            a[r] = '-';
            r--;
            y++;
        }
        else if (s[i] == '0')
        {
            x++;
            a[l] = '-';
            l++;
        }
        else
        {
            z++;
        }
    }
    if(r-l+1<=z){
        for (int i = 0; i < n; i++)
        {
            a[i]='-';
        }
    }
    else{
        
        while (true)
        {
            if (z == 0)
            {
                break;
            }
            a[l] = '?';
            a[r] = '?';
            l++;
            r--;
            z--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i];
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
