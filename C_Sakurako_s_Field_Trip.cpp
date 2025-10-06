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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = n/2-1; i > 0; i--)
    {
        if(a[i]==a[i-1]||a[n-i-1]==a[n-i]){
            swap(a[i-1],a[n-i]);
        }
    }
    
    ll ans1 = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            ans1++;
        }
    }
    cout <<ans1<< endl;
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