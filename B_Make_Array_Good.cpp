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
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        cout<<n<<endl;
        for (int i = 0; i < n; i++)
        {
            ll deg=1;
            while(deg<a[i]){
                deg*=2;
            }
            cout<<i+1<<" "<<deg-a[i]<<endl;
        }
        
    }
}