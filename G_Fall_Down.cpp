#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m;
    cin>>n>>m;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<pair<int,int>> v[m];
    for (int j = 0; j < m; j++)
    {
        ll cnt=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i][j]=='*'){
                cnt++;
            }
            else if(a[i][j]=='o'){
                v[j].push_back({i,cnt});
                cnt=0;
            }
        }
        v[j].push_back({n,cnt});
    }
    string s;
    for (int i = 0; i < m; i++)
    {
        s.push_back('.');
    }
    
    string b[n+1];
    for (int i = 0; i < n+1; i++)
    {
        b[i]=(s);
    }
    
    for (int j = 0; j < m; j++)
    {
        for (int i = 0; i < v[j].size(); i++)
        {
            b[v[j][i].first][j]='o';
            for (int k = v[j][i].first-1; k >= v[j][i].first-v[j][i].second; k--)
            {
                b[k][j]='*';
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<b[i][j];
        }
        cout<<endl;
    }
    
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