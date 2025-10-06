#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int a[5];
    cin>>a[0]>>a[1]>>a[3]>>a[4];
    a[2]=a[0]+a[1];
    int cnt=1,cnt2=1;
    if(a[1]+a[2]==a[3]){
        cnt++;
    }
    if(a[2]+a[3]==a[4]){
        cnt++;
    }
    a[2]=a[4]-a[3];
    if(a[1]+a[2]==a[3]){
        cnt2++;
    }
    if(a[0]+a[1]==a[2]){
        cnt2++;
    }
    cout<<max(cnt,cnt2)<<endl;
    return;
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}