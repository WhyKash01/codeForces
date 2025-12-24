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
    string s;
    cin >> s;
    for(int i = 1; i <= n; i++)
    {
        if(n%i == 0)
        {
            int satisfy = 2;
            for(int j = 0; j < i; j++)
            {
                for(int k = j+i; k < n; k+=i)
                {
                    if(s[k] != s[j])
                    {
                        satisfy--;
                    }
                }
            }
            if(satisfy > 0)
            {
                cout << i << endl;
                return;
            }
            satisfy = 2;
            for(int j = n-i; j < n; j++)
            {
                for(int k = j-i; k >= 0; k-=i)
                {
                    if(s[k] != s[j])
                    {
                        satisfy--;
                    }
                }
            }
            if(satisfy > 0)
            {
                cout << i << endl;
                return;
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
