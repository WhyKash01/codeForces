#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    multiset<ll> a, b;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.insert(x);
    }
    for (int i = 0; i < m; i++)
    {
        ll x;
        cin >> x;

        if (a.find(x) != a.end())
        {
            a.erase(a.find(x));
        }
        else
        {
            b.insert(x);
        }
    }

    ll asum = 0, bsum = 0;
    for (auto i : a)
    {
        asum += i;
    }
    for (auto i : b)
    {
        bsum += i;
    }
    if (asum != bsum)
    {
        cout << "NO" << endl;
    }
    else
    {
        auto it = b.begin();
        ll sum = 0;
        bool ans = true;
        ll last = -1;
        for (auto i : a)
        {
            if(abs(sum!=0&&sum-i)>0){
                break;
            }
            sum+=i;
            if(sum==*it){
                it++;
                sum=0;
            }
        }
        if (it==b.end())
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