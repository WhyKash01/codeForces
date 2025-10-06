#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    int  a[n];
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    int ans=0;
    for (int i = 0; i < n; i++)
    {
        if(mp[a[i]]==0){
            continue;
        }
        int o=m-a[i];
        if(mp[o]!=0){
            if(a[i]==o){
                ans+=mp[a[i]]/2;
            }
            else{
                ans+=min(mp[a[i]],mp[o]);
            }
        }
        mp[a[i]]=0;
        mp[o]=0;
    }
    cout<<ans<<endl;
    return;
}
 
 
int32_t main() {
    cin.tie(0)->sync_with_stdio(0);
    int tc=1;
    cin>>tc;
    while(tc--) solve();
    return 0;
}