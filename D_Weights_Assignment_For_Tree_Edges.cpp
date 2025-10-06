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
    int n;
    cin>>n;
    int s[n+1];
    set<int>k;
    int root=-1;
    vector<int>v(n+1);
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        s[i+1]=x;
        if(x==i+1){
            root=x;
            k.insert(x);
            v[x]=0;
        }
    }
    bool f=true;
    vector<int>d(n+1);
    d[root]=0;
    int z=0;
    for (int i = 0; i < n; i++)
    {
        int x;cin>>x;
        if(i==0){
            if(x!=root){
                f=false;
            }
        }
        if(k.find(s[x])!=k.end()){
            k.insert(x);
            v[x]=z-d[s[x]];
            d[x]=z;
            z++;
        }
        else{
            f=false;
        }
    }
    if(f){
        for (int i = 1; i <= n; i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<-1<<endl;
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
