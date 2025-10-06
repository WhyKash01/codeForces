#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m;
    cin>>n>>m;
    ll a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(i>=m-1&&i!=0){
                a[i][j]=a[0][j];
            }
            else{
                a[i][j]=(i+j)%m;
            }
        }
    }
    if(m==1){
        cout<<0<<endl;
    }
    else if(m<n){
        cout<<m<<endl;
    }
    else{
        cout<<min(n+1,m)<<endl;
    }
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