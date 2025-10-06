#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    bool f=true;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i]>b[i]){
            f=false;
            break;
        }
        else if(a[i]<b[i]){
            if(b[i+1]+1>=b[i]){
                a[i]=b[i];
            }
            else{
                f=false;
                break;
            }
        }
    }
    if(a[n-1]>b[n-1]){
        f=false;
    }
    else if(a[n-1]<b[n-1]){
        if(a[0]+1<b[n-1]){
            f=false;
        }
    }
    f?cout<<"YES\n":cout<<"NO\n";
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