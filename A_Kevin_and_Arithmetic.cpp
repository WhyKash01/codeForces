#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll e=0,o=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]%2==0){
            e++;
        }
        else{
            o++;
        }
    }
    if(e==0){
        cout<<o-1<<endl;
    }
    else{
        cout<<o+1<<endl;
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