#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int, int>
#define fr first
#define sc second
#define vi vectortor<int>
#define vvi vectortor<vectortor<int>>
#define vpii vectortor<pair<int, int>>
#define pb push_back
#define ppb pop_back
#define inp(v)        \
    for (auto &x : v) \
        cin >> x;
#define rep(i, a, b) for (int i = a; i < b; i++)
#define all(v) (v).begin(), (v).end()
int M = 1e9 + 7;

void solve()
{
    int n;cin>>n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<int> v[n];
    for (int i = 0; i < n; i++)
    {
        v[i].push_back(i+1);
        // cout<<"cur: "<<i<<endl;
        for (int j = 0; j < n; j++)
        {
            
            if(a[i][j]=='1'){
                // cout<<"set: "<<i<<" "<<j<<endl;
                v[j].push_back(i+1);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<v[i].size()<<" ";
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
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
