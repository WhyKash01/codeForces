#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t > 0)
    {
        int count = 0;
        string s;
        cin >> s;
        long long j = 0;
        long long ct = 0;
        for (long long i = 0; i < s.length(); i++)
        {
            if (s[i] == '0')
            {
                if (i == j)
                {
                    j++;
                }
                else
                {
                    ct += (i - j + 1);
                    j++;
                }
            }
        }
        cout << ct << endl;
        t--;
    }
}