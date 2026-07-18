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
int M = 1e9+7;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],b[n][m];
    set<set<int>>s1,s2;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        set<int>v1;
        for (int j = 0; j < m; j++)
        {
            v1.insert(a[i][j]);
        }
        s1.insert(v1);
    }
    for (int j = 0; j < m; j++)
    {
        set<int>v1;
        for (int i = 0; i < n; i++)
        {
            v1.insert(a[i][j]);
        }
        s2.insert(v1);
    }
    
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        set<int>v1;
        for (int j = 0; j < m; j++)
        {
            v1.insert(b[i][j]);
        }
        if(s1.find(v1)==s1.end()){
            f=false;
            break;
        }
    }
    for (int j = 0; j < m; j++)
    {
        set<int>v1;
        for (int i = 0; i < n; i++)
        {
            v1.insert(b[i][j]);
        }
        if(s2.find(v1)==s2.end()){
            f=false;
            break;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
