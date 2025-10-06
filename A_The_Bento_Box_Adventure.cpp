#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll a[4];
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    sort(a,a+4);
    ll ans=1;
    for (int i = 0; i < 4; i++)
    {
        if(a[i]!=ans){
            break;
        }
        ans++;
    }
    cout<<ans<<endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}