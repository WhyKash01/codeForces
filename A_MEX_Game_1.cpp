#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    set<ll>s;
    map<ll,ll>m;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
        m[x]++;
    }
    ll mex=0;
    ll last=LLONG_MAX;
    ll cnt=0;
    for(auto i:s){
        if(m[i]==1){
            cnt++;
        }
        if(cnt==2){
            last=i;
            break;
        }
    }
    for(auto i:s){
        if(i!=mex){
            break;
        }
        else{
            mex++;
        }
    }
    cout<<min(mex,last)<<endl;
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