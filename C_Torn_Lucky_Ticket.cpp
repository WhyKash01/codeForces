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

void solve(){
    int n;
    cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    vector<int> a[n];
    map<pair<int,int>,int>m;
    for (int i = 0; i < n; i++)
    {
        int l=s[i].size();
        a[i].push_back(0);
        for (int j = 1; j <= l; j++)
        {
            a[i].push_back(a[i][j-1]+(s[i][j-1]-'0'));
        }
        m[{l,a[i][l]}]++;

    }
    int ans=n;
    for (int i = 0; i < n; i++)
    {
        int l=a[i].size();
        for (int j = 1; j <= l; j++)
        {
            if(j<(l)/2){
                int x=(l-1)-2*j;
                int y=a[i][l-1]-2*a[i][j];    
                if(y>0){
                    ans+=m[{x,y}];
                }
            }
            if(j==l){
                ans+=m[{l-1,a[i][l-1]}]-1;
            }
            else if(j>l/2){
                int x=(l-1)-2*(l-j);
                int y=a[i][j-1]-(a[i][l-1]-a[i][j-1]);
                if(y>0){
                    ans+=m[{x,y}];
                }
            }
        }
        
    }
    cout<<ans<<endl;
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    while (t--)
    {
        solve();
    }
}
