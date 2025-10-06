#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    
    ll n,b,c;
    cin>>n>>b>>c;
    if(b==0){
        if(c==n-2){
            cout<<n-1<<endl;
        }
        else if(c<n-1){
            cout<<-1<<endl;
        }
        else if(c==n-1){
            cout<<n-1<<endl;
        }
        else{
            cout<<n<<endl;
        }
    }
    else{
        if(c>=n){
            cout<<n<<endl;
        }
        else{

            ll x=max(0ll,((n-1)-c)/b);
            cout<<n-x-1<<endl;
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