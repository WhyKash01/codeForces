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
    int n,m;
    cin>>n>>m;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    bool x=false;
    bool f=false;
    bool k=true;
    for (int j = 0; j < m; j++)
    {
        bool z=f;
        for (int i = 0; i < n; i++)
        {
            if(s[i][j]=='L'){
                if(f){
                    s[i][j]='B';
                    s[i][j+1]='W';
                }
                else{
                    s[i][j]='W';
                    s[i][j+1]='B';
                }
                f=!f;
            }
        }
        if(z!=f){
            k=false;
        }
    }
    for (int i = 0; i < n; i++)
    {
        bool z=x;
        for (int j = 0; j < m; j++)
        {
            if(s[i][j]=='U'){
                if(x){
                    s[i][j]='B';
                    s[i+1][j]='W';
                }
                else{
                    s[i][j]='W';
                    s[i+1][j]='B';
                }
                x=!x;
            }
            
        }
        if(x!=z){
                k=false;
            }
    }
    
    if(k){
        
        for (int i = 0; i < n; i++)
        {
            cout<<s[i]<<endl;
        }
    }
    else{
        cout<<-1<<endl;
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
