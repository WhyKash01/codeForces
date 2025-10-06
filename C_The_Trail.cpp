#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,m;
    cin>>n>>m;
    string s;
    cin>>s;
    ll b[n]={0},c[m]={0};
    ll a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            b[i]+=a[i][j];
            c[j]+=a[i][j];
        }
    }
    
    ll x=0,y=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='D'){
            a[x][y]=-b[x];
            c[y]+=a[x][y];
            x++;
        }
        else{
            a[x][y]=-c[y];
            b[x]+=a[x][y];
            y++;
        }
    }
    a[x][y]=-c[y];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<a[i][j]<<" ";
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