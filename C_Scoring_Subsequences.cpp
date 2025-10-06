#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    ll curr=0;
    for (int i = 0; i < n; i++)
    {
        while(curr<i){
            if(a[curr]>=i-curr+1){
                break;
            }
            else{
                curr++;
            }
        }
        cout<<i-curr+1<<" ";
    }
    cout<<endl;

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