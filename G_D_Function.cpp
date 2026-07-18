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
int M = 1e9+7;
int quickPow(int a, int p){
    int res=1;
    while(p){
        if(1&p)
            res = res*a%M;
        a = a*a % M;
        p>>=1;
    }
    return res;
}
void solve()
{
    int l,r,k;
    cin>>l>>r>>k;
    int curr=1;
    if(k>9){
        cout<<0<<endl;
    }
    else{
        curr=9/k+1;
        int ans=quickPow(curr,r)-quickPow(curr,l);
        ans+=M;
        ans%=M;
        cout<<ans<<endl;
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
