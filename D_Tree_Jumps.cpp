#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));

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
int add(int x, int y) {
  x += y;
  if (x >= M) x -= M;
  if (x < 0) x += M;
  return x;
}
void solve()
{
    int n;
    cin>>n;
    vector<int> a(n+1,0),b(n+1,0),c(n-1),d(n+1,0);
    int Max=0;
    vector<vector<int>>v(n);
    v[0].push_back(1);
    a[1]=1;
    for (int i = 0; i < n-1; i++)
    {
        cin>>c[i];
        int x=c[i];
        Max=max(Max,a[x]);
        v[a[x]].push_back(i+2);
        a[i+2]=a[x]+1;
    }
    for(int i=Max;i>=1;i--){
        for (int j = 0; j < v[i].size(); j++)
        {
            b[i]=add(add(b[i],b[i+1]),add(-d[v[i][j]],1));
            d[c[v[i][j]-2]]=add(add(d[c[v[i][j]-2]],b[i+1]),add(-d[v[i][j]],1));
        }
    }
    cout<<(b[1]+1)%M<<endl;
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
