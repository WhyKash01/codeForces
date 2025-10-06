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
   int n,m;
   cin>>n>>m;
   string s,t;cin>>s>>t;
   if(s==t){
    cout<<"YES\n";
    return ;  
   }
   int ans=n/2;
   int x=(n+1)/2;
   for (int i = x; i > 0; i--)
   {
        int y=n-x;
        if(s[x-1]==t[x-1]&&s[y]==t[y]){
            ans++;
            x--;
            y++;
        }
        else{
            break;
        }
   }
   bool f=true;
   sort(s.begin(),s.end());
   sort(t.begin(),t.end());
   if(ans>=m&&t==s){
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}
