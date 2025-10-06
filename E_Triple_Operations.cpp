#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll l,r;
    cin>>l>>r;
    ll sum=3,cnt=1;
    ll ans=0;
    while(l>=sum){
            sum*=3;
            cnt++;
    }
    ans+=cnt;
    while(r>=sum){
        ans+=((sum-1)-l+1)*cnt;
        l=sum;
        sum*=3;
        cnt++;
    }
    ans+=(r-l+1)*cnt;
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