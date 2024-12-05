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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ans = true;
        if (n > 2 * k)
        {
            for (int i = 0; i < k; i++)
            {
                if (s[i] != s[n - i - 1])
                {
                    ans = false;
                    break;
                }
            }
            if(ans)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}