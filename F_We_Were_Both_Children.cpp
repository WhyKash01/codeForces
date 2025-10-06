#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    int Max = 0;

    for (int i = 1; i <= n; i++)
    {
        int count = 0;
        for (int j = 1; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                count+=mp[i / j];
                if ((i/j) != j)
                    count+= mp[j];
            }
        }
        Max = max(count, Max);
    }
    cout << Max << endl;
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