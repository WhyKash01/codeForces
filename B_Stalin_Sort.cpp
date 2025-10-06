#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll M = 1000000007;
using namespace std;
bool comp(int a, int b) {
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
        int n;
        cin>>n;
        vector<ll> a(n),b(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end(),comp);
        unordered_map<int,int>m;
        ll ans=10000000000;
        for (int i = 0; i < n; i++)
        {
            auto it = find(b.begin(), b.end(), a[i]);
            ans=min(ans,1ll*i+distance(b.begin(),it));
        }
        cout<<ans<<endl;
    }
}