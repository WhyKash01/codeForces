#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    bool x=false;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i]>0){
            x=true;
        }
    }
    if (n == 1)
    {
        cout << a[0] << endl;
    }
    else if(!x){
        ll Max=LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            Max=max(Max,a[i]);
        }
        cout<<Max<<endl;
    }
    else
    {
        ll e=LLONG_MIN,o=LLONG_MIN;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>0){
                if(i%2==0){
                    if(e==LLONG_MIN){
                        e=a[i];
                    }
                    else{
                        e+=a[i];
                    }
                }
                else{
                    if(o==LLONG_MIN){
                        o=a[i];
                    }
                    else{
                        o+=a[i];
                    }
                }
            }
        }
        cout<<max(e,o)<<endl;
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