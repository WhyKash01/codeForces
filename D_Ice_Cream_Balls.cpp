#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    
    ll low=1,high=2e9;
    while(high-low>1){
        ll mid=(high+low)/2;
        if(mid*(mid-1)/2<=n){
            low=mid;
        }
        else{
            high=mid;
        }
    }
    if(high*(high-1)/2<=n){
        low=high;
    }
    if(low*(low-1)/2==n){
        cout<<low<<endl;
    }
    else{
        ll y=n-(low*(low-1)/2);
        cout<<low+y<<endl;
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