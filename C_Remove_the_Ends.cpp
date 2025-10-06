#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    vector<ll> v1, v2;
    v1.push_back(0);
    v2.push_back(0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll e = 0, o = 0;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            if (a[i] < 0)
            {
                o -= a[i];
            }
            else
            {
                e += a[i];
            }
        }
        else
        {
            if (a[i] > 0 && a[i - 1] < 0)
            {
                v1.push_back(o+v1[v1.size()-1]);
                e += a[i];
                o = 0;
            }
            else if (a[i] < 0 && a[i - 1] > 0)
            {
                v2.push_back(e+v2[v2.size()-1]);
                o -= a[i];
                e = 0;
            }
            else
            {
                if (a[i] > 0)
                {
                    e += a[i];
                }
                else
                {
                    o -= a[i];
                }
            }
        }
    }
    if (e != 0)
    {
        v2.push_back(e+v2[v2.size()-1]);
    }
    if (o != 0)
    {
        v1.push_back(o+v1[v1.size()-1]);
    }
    ll ans=max(v2[v2.size()-1],v1[v1.size()-1]);
    if(a[0]>0){
        for (int i = 1; i < v1.size(); i++)
        {
            ans=max(v2[i]+v1[v1.size()-1]-v1[i-1],ans);
        }
    }
    else{
        for (int i = 1; i < v2.size(); i++)
        {
            ans=max(v2[i]+v1[v1.size()-1]-v1[i],ans);
        }
    }
    cout<<ans<<endl;
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