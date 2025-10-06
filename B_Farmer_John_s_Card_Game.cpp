#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(a[i],a[i]+m);
    }
    bool ans=true;
    for (int i = 0; i < n; i++)
    {
        if(!ans){
            break;
        }
        ll start=a[i][0];
        for (int j = 1; j < m; j++)
        {
            start+=n;
            if(a[i][j]!=start){
                ans=false;
            }
        }
    }
    map<int,int> mp;
    if(ans){
        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i]=a[i][0];
            mp[b[i]]=i+1;
        }
        sort(b,b+n);
        for (int i = 0; i < n; i++)
        {
            cout<<mp[b[i]]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return;
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}