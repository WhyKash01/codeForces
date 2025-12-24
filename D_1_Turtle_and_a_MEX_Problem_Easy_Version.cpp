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
void solve() {
    int n,k;cin>>n>>k;
    int Max=-1;
    set<int>s[n];
    for (int i = 0; i < n; i++)
    {
        int l;cin>>l;
        for (int j = 0; j < l; j++)
        {
            int x;cin>>x;
            s[i].insert(x);
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        int z=0;bool e=false;
        while(true){
            if(!e&&!s[i].count(z)){
                e=true;
            }
            else if(!s[i].count(z)){
                Max=max(Max,z);
                break;
            }
            z++;
        }
    }
    int ans=0;
    if(k<=Max){
        ans+=(k+1)*Max;
    }else{
        ans+=(Max+1)*Max;
        ans+=(k*(k+1))/2-((Max*(Max+1))/2);
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