#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b))
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
int M = 998244353;

void solve()
{
    int a,b,r;
    cin>>a>>b>>r;
    if(a>b){
        swap(a,b);
    }
    if(a==b){
        cout<<0<<endl;
    }
    else{
        int x=-1;
        for (int i = 0; i < 62; i++)
        {
            if(b&(1LL<<i)&&(!(a&(1LL<<i)))){
                x=i;
            }
        }
        int z=0;
        for (int i = x-1; i >= 0; i--)
        {
            
                if(b&(1LL<<i)&&(!(a&(1LL<<i)))){
                    if(z+(1LL<<i)<=r){
                        z+=1LL<<i;
                        b-=1LL<<i;
                        a+=1LL<<i;
                    }
                }
            
        }
        cout<<b-a<<endl;
    }
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
