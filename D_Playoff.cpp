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
    cin>>n;
    string s;
    cin>>s;
    int e=0,o=0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1'){
            e++;
        }
        else{
            o++;
        }
    }
    int x=powl(2LL,e);
    int y=powl(2LL,n)-(powl(2,o)-1);
    for (int i = x; i <= y; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
