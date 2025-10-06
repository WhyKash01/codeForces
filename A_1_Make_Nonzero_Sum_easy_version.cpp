#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll mod = 998244353;
void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<pair<ll, ll>> v1;
    if(n%2!=0){
        cout<<-1<<endl;
    }
    else{
        ll x=-1;
        for (int i = 0; i < n; i++)
        {
            if(i%2==0){
                x=a[i];
            }
            else{
                if(a[i]==x){
                    v1.push_back({i,i+1});
                }
                else{
                    v1.push_back({i,i});
                    v1.push_back({i+1,i+1});
                }
            }
        }
        cout<<v1.size()<<endl;
        for (int i = 0; i < v1.size(); i++)
        {
            cout<<v1[i].first<<" "<<v1[i].second<<endl;
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