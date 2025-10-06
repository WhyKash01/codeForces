#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int l,r;
    cin>>l>>r;
    if(l==r&&l==1){
        cout<<1<<endl;
    }
    else{   
    cout<<r-l<<endl;
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