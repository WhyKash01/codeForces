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
        ll n,c;
        cin>>n>>c;
        ll a[n];
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin>>x;
            a[i]=x+i+1;
        }
        sort(a,a+n);
        int ans=0;
        for (int i = 0; i < n; i++)
        {
            if(a[i]>c){
                break;
            }
            else{
                c=c-a[i];
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}