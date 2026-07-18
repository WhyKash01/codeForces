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

void solve()
{
    int n;
    cin>>n;
    int x=10;
    bool f=false;
    for (int i = 1; i <= 100; i++)
    {
        int curr=n+i;
        int sum=0;
        while(curr){
            sum+=curr%10;
            curr/=10;
        }
        if(n+i-sum==n){
            f=true;
            break;
        }
    }
    if(f){
        cout<<10<<endl;
    }
    else{
        cout<<0<<endl;
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
