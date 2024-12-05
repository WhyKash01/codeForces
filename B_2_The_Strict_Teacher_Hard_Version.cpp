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
        int n, m, q;
        cin >> n >> m >> q;
        int pos[m];
        for (int i = 0; i < m; i++)
        {
            cin >> pos[i];
        }
        int qu[q];
        for (int i = 0; i < q; i++)
        {
            cin >> qu[i];
        }
        sort(pos, pos + m);
        for (int i = 0; i < q; i++)
        {
            int curr = qu[i];
            int low = 0, high = m - 1;
            while (high - low > 1)
            {
                int mid = (high + low) / 2;
                if (curr > pos[mid])
                {
                    low = mid;
                }
                else
                {
                    high = mid;
                }
            }
            if (pos[low] == curr || pos[high] == curr)
            {
                cout << 0 << endl;
            }
            else if (pos[low] == pos[high])
            {
                if (pos[low] > curr)
                {
                    cout << pos[low] - 1 << endl;
                }
                else
                {
                    cout << n - pos[low] << endl;
                }
            }
            else if (pos[low] > curr)
            {
                cout << pos[low] - 1 << endl;
            }
            else if (pos[high] < curr)
            {
                cout << n - pos[high] << endl;
            }
            else
            {
                int z = min(abs((pos[low] + pos[high]) / 2 - pos[low]), abs((pos[low] + pos[high]) / 2 - pos[high]));
                cout << z << endl;
            }
        }
    }
}