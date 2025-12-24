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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0'){
            ans+=i+1;
            x++;
        }
    }
    set<int>st;
    int y=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i]=='1'){
            if(x-y<=0){
                st.insert(i+1);
            }
            else{
                y++;
            }
        }
        else if(s[i]=='0'){
            x--;
            y=max(0ll,y-1);
        }
    }
    int l=(st.size()+1)/2;
    for (int i = 0; i < l; i++)
    {
        ans+=*st.begin();
        st.erase(st.begin());
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