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
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    float curr=0;
    bool f=false;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            curr++;
        }
        else if(i>0){
            if(s[i-1]=='0'){
                if(f){
                    curr--;
                }
                curr--;
                ans+=ceil(curr/3);
            }
            f=true;
            curr=0;
            ans++;
        }
        else{
            f=true;
            curr=0;
            ans++;
        }
    }
    if(f){
        curr--;
    }
    ans+=ceil(curr/3);
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
