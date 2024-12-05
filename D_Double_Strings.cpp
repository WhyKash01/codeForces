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
		string* str = new string[n];
		map<string, bool> con;
		for (int i = 0; i < n; i++)
		{
			cin >> str[i];
			con[str[i]] = true;
		}
		for (int i = 0; i < n; i++)
		{
			bool ans = false;
			for (int j = 0; j < str[i].size(); j++)
			{
				string s1 = str[i].substr(0, j), s2 = str[i].substr(j, str[i].size() - j);
				if (con[s1] && con[s2]) ans = true;
			}
			cout << (int)ans;
		}
		cout << endl;
    }
}
