#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n,k;
    cin>>n>>k;
    if(k%2==0){
        for (int i = 0; i < n; i++)
        {
            if(i==n-2){
                cout<<n<<" ";
            }
            else{
                cout<<n-1<<" ";
            }
        }
        cout<<endl;
    }
    else{
        for (int i = 0; i < n; i++)
        {
            if(i==n-1){
                cout<<n-1<<" ";
            }
            else{
                cout<<n<<" ";
            }
        }
        cout<<endl;
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