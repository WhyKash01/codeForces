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
int M = 998244353;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i = n-1; i >= n/2; i--)
    {
        if(s[i]=='0'){
            cout<<"1 "<<i+1<<" 1 "<<i<<endl;
            return;
        }
    }
    if(s[n/2-1]=='0'){
        cout<<n/2<<" "<<n<<" "<<n/2+1<<" "<<n<<endl;
    }
    else{
        cout<<n/2<<" "<<n-1<<" "<<n/2+1<<" "<<n<<endl;
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
