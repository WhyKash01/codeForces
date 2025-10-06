#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m;cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<string>v;
    for (int i = 0; i < min(n/2,m/2); i++)
    {
        string x;
        for (int j = i; j < m-i; j++)
        {
            x.push_back(s[i][j]);
        }
        for (int j = i+1; j < n-i-1; j++)
        {
            x.push_back(s[j][m-i-1]);
        }
        for (int j = m-i-1; j >=i ; j--)
        {
            x.push_back(s[n-i-1][j]);
        }
        for (int j = n-i-2; j >= i+1; j--)
        {
            x.push_back(s[j][i]);
        }
        v.push_back(x);
        
    }
    ll ans=0;
    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            ll z=v[i].size();
            if(v[i][j]=='1'){
                if(v[i][(j+1)%z]=='5'&&v[i][(j+2)%z]=='4'&&v[i][(j+3)%z]=='3'){
                    ans++;
                }
            }
        }
    }
    cout<<ans<<endl;
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