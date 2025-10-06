#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;cin>>n;
    ll a[n];
    map<ll,ll>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        m[a[i]]++;
    }
    ll cnt=0;
    pair<ll,ll>p;
    ll Max=0;
    for (int i = 0; i < n; i++)
    {
        if(m[a[i]]==1){
            cnt++;
        }
        else{
            if(Max<cnt){
                p.first=i-cnt;
                p.second=i-1;
                Max=cnt;
                cnt=0;
            }
            cnt=0;
        }
    }
    if(Max<cnt){
        p.first=n-cnt;
        p.second=n-1;
        Max=cnt;
    }
    if(Max==0){
        cout<<0<<endl;
    }
    else{
        cout<<p.first+1<<" "<<p.second+1<<endl;
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