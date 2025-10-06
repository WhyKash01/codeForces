#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    ll pref[n+1];
    pref[0]=0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        pref[i+1]=a[i]+pref[i];
    }
    ll low=1,high=n;
    while(high-low>1){
        ll mid=(high+low)/2;
        ll x=pref[mid]-pref[low-1];
        cout<<"? "<<mid-low+1<<" ";
        for (int i = low; i <= mid; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
        ll ansx;
        cin>>ansx;
        if(x!=ansx){
            high=mid;
        }
        else{
            low=mid;
        }
    }
    cout<<"? 1 "<<low<<endl;
    ll y;
    cin>>y;
    if(y==pref[low]-pref[low-1]){
        cout<<"! "<<high<<endl;
    }
    else{
        cout<<"! "<<low<<endl;
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