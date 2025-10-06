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
int M = 1000000007;

void solve()
{
    int n;
    cin>>n;
    pii a[3];
    cin>>a[0].first>>a[0].second>>a[1].first>>a[1].second>>a[2].first>>a[2].second;
    int u,v;
    cin>>u>>v;
    int x,y;
    if(a[0].first==a[1].first){
        x=a[0].first;
    }
    else if(a[0].first==a[2].first){
        x=a[0].first;
    }
    else{
        x=a[1].first;
    }
    if(a[0].second==a[1].second){
        y=a[0].second;
    }
    else if(a[0].second==a[2].second){
        y=a[0].second;
    }
    else{
        y=a[1].second;
    }
    if((x==1||x==n)&&(y==1||y==n)){
        if(x==u||y==v){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else if(x%2==u%2||y%2==v%2){
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
    cin>>t;
    while (t--)
    {
        solve();
    }
}
