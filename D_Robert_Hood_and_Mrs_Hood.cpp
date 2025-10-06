#include <bits/stdc++.h>
using namespace std;

#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()


void solve()
{
    int n,d,k;
    cin >> n >> d >> k;
    vi l(k), r(k);
    vi open(n+1), close(n+1);
    rep(i,0,k){
        cin >> l[i] >> r[i];
        open[l[i]]++;
        close[r[i]]++;
    }
    int mx = -1, mn = k+1;
    int a, b;
    int cnt = 0;
    rep(i,1,n+1){
        cnt += open[i];
        if(i >= d){
            cnt -= close[i - d];
            if(cnt > mx) mx = cnt, a = i;
            if(cnt < mn) mn = cnt, b = i;
        }
    }
    cout << a - d + 1 << " " << b - d + 1 << "\n";
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--)
    {
        solve();
    }
}