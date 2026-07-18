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
int MOD = 1e9 + 7;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    vector<int> lf(n);
    int l = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') l = i;
        lf[i] = l;
    }

    vector<int> rt(n);
    int next_1 = n;
    for (int i = n - 1; i >= 0; i--) {
        if (s[i] == '1') next_1 = i;
        rt[i] = next_1;
    }
    set<pair<int, int>> pt;
    for (int i = 0; i < m; i++)
    {
        int x,y;
        cin>>x>>y;
        x--,y--;
        x=rt[x];
        y=lf[y];
        if(x>y){
            pt.insert({-1,-1});
        }        
        else{
            pt.insert({x,y});
        }
    }
    cout<<pt.size()<<endl;
      
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