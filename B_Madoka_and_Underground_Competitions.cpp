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
        int n, k, r, c;
        cin >> n >> k >> r >> c;
        vector<string> v;
        int count = 0;
        for (int i = 0; i < k; i++)
        {
            string s(k, '.');
            v.push_back(s);
            v[i][count] = 'X';
            count++;
        }
        r = (r-1) % k, c = (c-1) % k;
        if (r != c)
        {
            string s = v[r];
            v[r] = v[c];
            v[c] = s;
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n / k; j++)
            {
                cout << v[i%k];
            }
            cout << endl;
        }
    }
}