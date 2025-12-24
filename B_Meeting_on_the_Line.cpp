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

void solve()
{
    int n;cin>>n;
    map<int,int>m;
    int a[n];
    
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        v.push_back(a[i]+x);
        v.push_back(a[i]-x);
    }
    int l=LLONG_MAX,r=LLONG_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        l=min(l,v[i]);
        r=max(r,v[i]);
    }
    cout<<(l+r)/2;
    if((l+r)%2!=0){
        cout<<".5";
    }
    cout<<endl;
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
