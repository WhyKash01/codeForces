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
int M = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int,int>m;
    m[0]=0,m[n+1]=0;
    set<int>s;
    s.insert(0);
    s.insert(n+1);
    vector<pair<int,int>>v;
    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i],i+1});
    }
    sort(v.begin(),v.end());
    int l=v.size()-1;
    int ans=1;
    for (int i = l; i >= 0; i--)
    {
        int x=v[i].first;
        int y=v[i].second;
        int i1=*s.upper_bound(y);
        auto k=s.lower_bound(y);
        k--;
        int i2=*(k);
        // cout<<i1<<" "<<i2<<endl;
        if(i1==n+1){
            m[y]=max(m[y],1LL);
        }
        else{
            if(x<a[i1-1]){
                m[y]=max(m[y],m[i1]+1);
            }
            else{
                m[y]=max(m[y],m[i1]);
            }
        }
        if(i2==0){
            m[y]=max(m[y],1LL);
        }
        else{
            if(x<a[i1-1]){
                m[y]=max(m[y],m[i2]+1);
            }
            else{
                m[y]=max(m[y],m[i2]);
            }
        }
        s.insert(y);
        ans=max(ans,m[y]);
    }
    cout<<ans<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
