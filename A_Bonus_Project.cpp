#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll Max=0;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        if(a[i]/b[i]>0){
            Max+=a[i]/b[i];
        }
    }
    if(Max>=k){
        ll cnt=0;
        ll c[n];
        for (int i = n-1; i >=0 ; i--)
        {
            if(a[i]/b[i]>0&&k>0){
                if(a[i]/b[i]<=k){
                    c[i]=a[i]/b[i];
                    k-=a[i]/b[i];
                }
                else{
                    c[i]=k;
                    k=0;
                }
            }
            else{
                c[i]=0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<c[i]<<" ";
        }
        cout<<endl;
    }
    else{
        for (int i = 0; i < n; i++)
        {
            cout<<"0 ";
        }
        cout<<endl;
    }

    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    while (tc--)
        solve();
    return 0;
}