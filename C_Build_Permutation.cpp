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
        cin >> n;
        int end = (n - 1) * 2;
        vector<int> s;
        for (int i = 0; i <= end; i++)
        {
            int x = sqrt(i);
            if (x * x == i)
            {
                s.push_back(i);
            }
        }
        int a = n - 1;
        int ans[n];
        int ptr = s.size() - 1;
        int las = a;
        int fir = s[ptr] - a;
        while (a >= 0)
        {
            for (int i = fir; i <= las; i++)
            {
                ans[i] = a;
                a--;
            }
            las = fir - 1;
            ptr--;
            fir = s[ptr] - a;
            while (fir > las)
            {
                ptr--;
                fir = s[ptr] - a;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
