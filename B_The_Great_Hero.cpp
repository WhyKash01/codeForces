#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
int Ceil(int x, int y)
{
    return ceil(static_cast<double>(x) / y);
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, n;
        cin >> x >> y >> n;
        int a[n],b[n];
        multiset<pair<int, int>> m;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        for (int i = 0; i < n; i++)
        {
            m.insert({a[i],b[i]});
        }
        
        int i = 0;
        bool ans = true;
        auto it=m.begin();
        while (y > 0 && it !=m.end())
        {
            int hero = Ceil(y, (*it).first);
            int monster = Ceil((*it).second, x);
            if (hero > monster)
            {
                y = y - ((*it).first * monster);
            }
            else if (hero == monster && ++it == m.end())
            {
                ans = true;
                break;
            }
            else
            {
                ans = false;
                break;
            }
            it++;
        }
        if (ans)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}