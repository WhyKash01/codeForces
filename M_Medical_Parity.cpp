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
int MOD = 1e9 + 7;
 
void solve(){
    string s,t;
    cin>>s>>t;
    s='0'+s;
    t='0'+t;
    int ans=0;
    int l=s.size();
    int i=0;
    while(i<l-1){
        if(t[i]=='0'){
            if(s[i+1]!=t[i+1]){
                ans++;
                i++;
            }
        }
        else{
            if(s[i+1]==t[i+1]){
                ans++;
                i++;
            }
        }
        i++;
    }
    cout<<ans<<endl;
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