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
    string s;cin>>s;
    int n;
    string l,r;
    cin>>n>>l>>r;
    set<char>c;
    int it=-1;
    for (int i = 0; i < n; i++)
    {
        if(l[i]>r[i]){
            swap(l[i],r[i]);
        }
    }
    bool ans=true;
    for (int i = 0; i < s.size(); i++)
    {
        if(c.empty()){
            it++;
            if(it==n){
                ans=false;
                break;
            }
            for (char j = l[it]; j <= r[it]; j++)
            {
                c.insert(j);
            }
        }
        c.erase(s[i]);
    }
    if(it==n-1&&c.empty()){
        cout<<"NO\n";
    }
    else{
        (ans)?cout<<"YES\n":cout<<"NO\n";
    }
    
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
