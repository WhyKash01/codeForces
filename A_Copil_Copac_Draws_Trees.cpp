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
    int n;
    cin >> n;
    pii a[n-1];
    for (int i = 0; i < n-1; i++)
    {
        cin>>a[i].first>>a[i].second;
        if(a[i].first>a[i].second){
            swap(a[i].first,a[i].second);
        }
    }
    set<int>s;
    s.insert(1);
    int ans=1;
    for (int i = 0; i < n-1; i++)
    {
        if(s.count(a[i].first)||s.count(a[i].second)){
            s.insert(a[i].first);
            s.insert(a[i].second);
        }
        else{
            ans++;
            s.insert(a[i].first);
            s.insert(a[i].second);
        }
    }
    cout<<ans<<endl; 
    return;
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
