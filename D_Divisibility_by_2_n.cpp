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
        ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    vector<ll> inc;
    ll need = 0;
    ll cur = 0;
    for (ll i = 0; i < n;i++){
        ll num = a[i];
        while(num%2==0){
            num /= 2;
            cur++;
        }
        num = i+1;
        ll extra = 0;
        while (num % 2 == 0)
        {
            num /= 2;
            extra++;
        }
        inc.push_back(extra);
    }
    sort(inc.begin(), inc.end());
    reverse(inc.begin(), inc.end());
    need = max(0ll, n - cur);
    ll ans = 0;
    for (ll i = 0; i < inc.size();i++){
        if(need<=0){
            break;
        }
        need -= inc[i];
        ans++;
    }
    if(need<=0){
        cout << ans << "\n";
    }
    else{
        cout << "-1" << "\n";
    }
    }
}
