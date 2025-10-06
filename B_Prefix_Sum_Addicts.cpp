#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
using namespace std;

ll M = 1000000007;

bool comp(int a, int b)
{
    return a > b;
}

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
	    vector<long long> s(n + 1);
	    for (int i = n - k + 1; i <= n; ++i)
		    cin >> s[i];
        bool ans=true;
	    if (k == 1)
	    {
	    	ans=true;
	    }
        else{
	    vector<long long> a(n + 1);
	    for (int i = n - k + 2; i <= n; ++i)
	    	a[i] = s[i] - s[i - 1];
	    if (!is_sorted(a.begin() + n - k + 2, a.end()))
	    {
	    	ans=false;
	    }
	    if (s[n - k + 1] > a[n - k + 2] * (n - k + 1))
	    {
	    	ans=false;
	    }
        }
	    ans?cout<<"YES\n":cout<<"NO\n";
    }
}
