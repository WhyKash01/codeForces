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
        int n;
        string str;
        cin >> n >> str;
        int ans[n];
        ans[n / 2] = 0;

        if (str[0] != '9')
        {
            string ans;
            for (int i = 0; i < n; i++)
                ans += '0' + (9 - (str[i] - '0'));
            for (int i = 0; i < n; i++)
                cout << ans[i];
        }
        else
        {
            vector<char> res(n);
            int is = 0;
            for (int i = n - 1; i >= 0; i--)
            {
                if (1 - is < str[i] - '0')
                {
                    res[i] = '0' + (11 - is - (str[i] - '0'));
                    is = 1;
                }
                else
                {
                    res[i] = '0' + (1 - is - (str[i] - '0'));
                    is = 0;
                }
            }
            for (char c : res)
                cout << c;
        }
        cout << endl;
    }
}