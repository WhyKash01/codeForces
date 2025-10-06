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
    set<int>s1,s2;
    for (int i = 1; i < n; i++)
    {
        if(s[i]=='1'){
            s1.insert(i);
        }
        else{
            s2.insert(i);
        }
    }
    if(s[n]!='1'){
        s1.erase(s1.find(*s1.rbegin()));
        s1.insert(n);
    }
    cout<<"0 ";
    for (auto i :s2)
    {
        cout<<i<<" ";
    }
    for (auto i :s1)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
}