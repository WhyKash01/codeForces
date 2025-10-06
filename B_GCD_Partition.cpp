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
ll calc(vector<int>& a) {
    ll zeroes = 0, ans = 0;
    for(int i = a.size() - 1; i >= 0; --i) {
        if(a[i] == 0) ++zeroes;
        else ans += zeroes;
    }
    return ans;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        ll a[n];
        ll sum=0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin>>x;
            a[i]=sum+x;
            sum+=x;
        }
        ll m=1;
        for (int i = 0; i < n-1; i++)
        {  
            m=max(m,__gcd(sum,a[i]));
        }
        cout<<m<<endl;
        
    }
}