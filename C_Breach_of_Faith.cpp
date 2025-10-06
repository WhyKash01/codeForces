#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    
    ll n;
    cin>>n;
    ll a[2*n];
    for (int i = 0; i < 2*n; i++)
    {
        cin>>a[i];
    }
    sort(a,a+(2*n));
    ll x=0,y=0;
    ll b[n+1];
    ll c[n-1];
    for (int i = 0; i < n-1; i++)
    {
        x+=a[i];
        c[i]=a[i];
    }
    ll j=0;
    for (int i = n-1; i < 2*n; i++)
    {
        y+=a[i];
        b[j]=a[i];
        j++;
    }
    ll z=y-x;
    bool f=false;
    ll k1=0,k2=0;
    for (int i = 0; i < 2*n+1; i++)
    {
        if(i%2==0){
            cout<<b[k1]<<" ";
            k1++;
        }
        else{
            if(!f){
                cout<<z<<" ";
                f=true;
            }
            else{
                cout<<c[k2]<<" ";
                k2++;
            }
        }
    }
    cout<<endl;
    
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