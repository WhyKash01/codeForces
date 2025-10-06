#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,l1,r1,l2,r2;
    cin>>n>>l1>>r1>>l2>>r2;
    ll ans=0,curr=0;
    while(true){
        if(powl(n,curr)*l1>powl(n,curr)*(r2/powl(n,curr))){
            break;
        }
        if(ceill(l2/powl(n,curr))*powl(n,curr)>r1*powl(n,curr)){
            curr++;
            continue;
        }
        ll x=max(ceill(l2/powl(n,curr))*powl(n,curr),l1*powl(n,curr));
        ll y=min(r1*powl(n,curr),powl(n,curr)*(r2/powl(n,curr)));
        ans+=((y-x)/powl(n,curr))+1;
        curr++;
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