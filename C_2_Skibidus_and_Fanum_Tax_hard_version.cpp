#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
bool issorted(ll a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] > a[i + 1])
        {
            return false;
            break;
        }
    }
    return true;
}
void solve()
{
    ll n, m;
    cin >> n >> m;
    ll a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    if (issorted(a, n))
    {
        cout << "YES" << endl;
    }
    else
    {
        sort(b, b + m);
        ll it = m - 1;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i == n - 1)
            {
                a[i] = max(a[i], b[it] - a[i]);
            }
            else
            {
                auto x=upper_bound(b,b+m,a[i]+a[i+1])-b-1;
                if(x>=0){
                    if(a[i]<=a[i+1]){
                        a[i]=max(a[i],b[x]-a[i]);
                    }
                    else{
                        a[i]=b[x]-a[i];
                    }
                }
            }
        }
        if (issorted(a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
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