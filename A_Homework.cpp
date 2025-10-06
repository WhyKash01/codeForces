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
    string s1,s2;
    cin>>s1;
    int m;
    cin>>m>>s2;
    string s3;
    cin>>s3;
    string a,b;
    for (int i = 0; i < m; i++)
    {
        if(s3[i]=='V'){
            a.push_back(s2[i]);
        }
        else{
            b.push_back(s2[i]);
        }
    }
    for (int i = a.size()-1; i >= 0; i--)
    {
        cout<<a[i];
    }
    
    cout<<s1<<b<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while (t--)
    {
        solve();
    }
}
