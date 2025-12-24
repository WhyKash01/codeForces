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
    int n,k,m;
    cin>>n>>k>>m;
    string s;cin>>s;
    set<char>st,st1;
    for (int i = 0; i < k; i++)
    {
        st.insert('a'+i);
    }
    string ans;
    for (int i = 0; i < m; i++)
    {
        if(st1.empty()){
            st1=st;
        }
        if(st1.count(s[i])){
            st1.erase(s[i]);
        }
        if(st1.empty()){
            ans+=s[i];
        }
    }
    
    if(ans.size()>=n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
        char x='a';
        if(!st1.empty()){
            x=*st1.begin();
        }
        cout<<ans;
        for (int i = ans.size(); i < n; i++)
        {
            cout<<x;
        }
        cout<<endl;
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
