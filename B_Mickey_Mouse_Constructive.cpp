#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int MOD = 676767677;
int fac(int n) {
    int c = 0;
    if (n <= 0){   
        return 1;
    }
    for (int i = 1; i <= std::sqrt(n); i++) {
        if (n % i == 0) {
            
            if (n / i == i) {
                c++;
            } else {
                
                c += 2;
            }
        }
    }
    return c;
}
void solve()
{
    int x,y;
    cin>>x>>y;
    
    int z=abs(x-y);
    cout<<fac(z)%MOD<<endl;
    
    for (int i = 0; i < x; i++)
    {
        cout<<1<<" ";
    }
    for (int i = 0; i < y; i++)
    {
        cout<<-1<<" ";
    }
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
}