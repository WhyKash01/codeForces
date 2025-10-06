#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;cin>>n;
    if(n%2==0){
        cout<<"No\n";
    }
    else{
        cout<<"Yes\n";
        ll x=n*2;
        ll y=x-(n/2+1);
        for (int i = 1; i <= n; i++)
        {
            if(i%2==0){
                cout<<i<<" "<<y<<endl;
                y--;
            }
            else{
                cout<<i<<" "<<x<<endl;
                x--;
            }
        }
        
    }
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}