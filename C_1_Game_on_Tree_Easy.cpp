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
    int n,k;
    cin>>n>>k;
    vector<int> a[n+1];
    for (int i = 0; i < n-1; i++)
    {
        int x,y;
        cin>>x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    int z;
    cin>>z;
    bool f=false;
    for (int i = 0; i < a[z].size(); i++)
    {
        int x=z,y=a[z][i],e=1;
        while(a[y].size()==2){
            e++;
            if(a[y][0]!=x){
                x=y;
                y=a[y][0];
            }
            else{
                x=y;
                y=a[y][1];
            }
        }
        if(e%2==1){
            f=true;
        }
    }
    if(f){
        cout<<"Ron\n";
    }
    else{
        cout<<"Hermione\n";
    }

}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
}
