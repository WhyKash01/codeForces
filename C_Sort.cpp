#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;
const ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<vector<int>> pre1(n + 1, vector<int>(26, 0));
        vector<vector<int>> pre2(n + 1, vector<int>(26, 0));

        for (int i = 1; i <= n; i++)
        {
            char c;
            cin >> c;
            pre1[i][c - 'a']++;

            for (int j = 0; j < 26; j++)
                pre1[i][j] += pre1[i - 1][j];
        }
        for (int i = 1; i <= n; i++)
        {
            char c;
            cin >> c;
            pre2[i][c - 'a']++;

            for (int j = 0; j < 26; j++)
                pre2[i][j] += pre2[i - 1][j];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;

            int dif = 0;

            for (int c = 0; c < 26; c++)
            {
                int v1 = pre1[r][c] - pre1[l - 1][c];
                int v2 = pre2[r][c] - pre2[l - 1][c];

                dif += abs(v1 - v2);
            }
            cout << dif / 2 << "\n";
        }
    }
    return 0;
}