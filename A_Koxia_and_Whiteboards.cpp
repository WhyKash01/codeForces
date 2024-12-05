#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,m;
		cin>>n>>m;
		vector<long long> a(n+m);
        for (int i = 0; i < n+m; i++)
        {
            cin>>a[i];
        }
		sort(a.begin(),a.end()-1);
		reverse(a.begin(),a.end());
		
		long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans+=a[i];
        }
		cout<<ans<<endl;
    }
}
