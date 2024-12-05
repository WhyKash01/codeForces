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
        string s;
        cin >> s;
        int m;
        cin >> m;
        string curr = s;
        set<string> set;
        int hour = (curr[0] - '0') * 10 + (curr[1] - '0');
        int min = (curr[3] - '0') * 10 + (curr[4] - '0');
        string currs = "asd";
        while (set.find(curr) == set.end())
        {
            if (currs == s)
            {
                break;
            }
            if (curr[0] == curr[4] && curr[1] == curr[3])
            {
                set.insert(curr);
            }
            // cout<<curr<<endl;
            min = min + m;
            hour = (hour + (min / 60)) % 24;
            min = (min % 60);
            string a = to_string(hour), b = to_string(min);
            if (a.length() == 2)
            {
                curr[0] = a[0], curr[1] = a[1];
            }
            else
            {
                curr[0] = '0', curr[1] = a[0];
            }
            if (b.length() == 2)
            {
                curr[3] = b[0], curr[4] = b[1];
            }
            else
            {
                curr[3] = '0', curr[4] = b[0];
            }
            currs = curr;
        }
        cout << set.size() << endl;
    }
}