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
int M = 998244353;

void solve()
{
    int l1,b1,l2,b2,l3,b3;
    cin>>l1>>b1>>l2>>b2>>l3>>b3;
    int b=-1,l=-1;
    bool f=false;
    if(l1==l2&&l2==l3){
        if(b1+b2+b3==l1){
            f=true;
        }
    }
    if(b1==b2&&b2==b3){
        if(l1+l2+l3==b1){
            f=true;
        }
    }
    if(b1==b2+b3&&l2==l3){
        if(b1==l1+l2){
            f=true;
        }
    }
    if(l1==l2+l3&&b2==b3){
        if(l1==b2+b1){
            f=true;
        }
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
