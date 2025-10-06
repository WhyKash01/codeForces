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
int M = 998244353;

void solve()
{
    int n;
    cin >> n;
    char c;
    cin >> c;
    string a[n * 2];
    for (int i = 0; i < n * 2; i++)
    {
        cin >> a[i];
    }
    vector<vector<string>> b(4, vector<string>(0));
    for (int i = 0; i < n * 2; i++)
    {
        if (a[i][1] == 'C')
        {
            b[0].push_back(a[i]);
        }
        else if (a[i][1] == 'S')
        {
            b[1].push_back(a[i]);
        }
        else if (a[i][1] == 'H')
        {
            b[2].push_back(a[i]);
        }
        else
        {
            b[3].push_back(a[i]);
        }
    }
    int t = -1;
    if (c == 'C')
    {
        t = 0;
    }
    else if (c == 'S')
    {
        t = 1;
    }
    else if (c == 'H')
    {
        t = 2;
    }
    else
    {
        t = 3;
    }
    int o = 0;
    for (int i = 0; i < 4; i++)
    {
        if (i != t)
        {
            if (b[i].size() % 2 != 0)
            {
                o++;
            }
        }
    }
    if (o > b[t].size())
    {
        cout << "IMPOSSIBLE\n";
    }
    else
    {
        sort(b[0].begin(), b[0].end());
        sort(b[1].begin(), b[1].end());
        sort(b[2].begin(), b[2].end());
        sort(b[3].begin(), b[3].end());
        int x = 0;
        for (int j = 0; j < 4; j++)
        {
            if (j != t)
            {
                for (int i = 0; i < b[j].size(); i += 2)
                {
                    if (i == b[j].size() - 1)
                    {
                        cout << b[j][i] << " " << b[t][x] << endl;
                        x++;
                    }
                    else
                    {
                        cout << b[j][i] << " " << b[j][i + 1] << endl;
                    }
                }
            }
            
        }
        for(int i=x;i<b[t].size();i+=2){
            cout<<b[t][i]<<" "<<b[t][i+1]<<endl;
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
