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
    int n;cin>>n;
    int b[n],a[n];
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
        m[b[i]]++;
    }
    for (auto x:m)
    {
        if(x.second%x.first!=0){
            cout<<-1<<endl;
            return;
        }
    }
    map<int,int>m2;
    int z=1;
    for(auto x:m){
        m2[x.first]=z;
        z+=x.second/x.first;
    }
    map<int,int>m3;
    for (int i = 0; i < n; i++)
    {
        cout<<m2[b[i]]<<" ";
        m3[b[i]]++;
        if(m3[b[i]]%b[i]==0){
            m2[b[i]]++;
        }
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
