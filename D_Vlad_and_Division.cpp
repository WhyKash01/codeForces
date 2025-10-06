#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    map<ll,ll>m;
    for(int i=0;i<n;i++){
        cin>>a[i];
        m[a[i]]++;
    }
    ll cnt=0;
    sort(a,a+n);
    for (int i = 0; i < n; i++)
    {
        if(m[a[i]]>0){
            cnt++;
            ll f=a[i]^2147483647;
            m[f]--;
            m[a[i]]--;
        }
    }
    cout<<cnt<<endl;
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