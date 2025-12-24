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

void solve() 
{
    int n,k;cin>>n>>k;
    int a[n];
    set<int>s;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s.insert(i+1);
    }
    int x=1;
    int y=2;
    for (int i = 0; i < n; i++)
    {
        s.erase(a[i]);
    }
    if(!s.empty()){
        x=*s.begin();
        s.erase(s.begin());
    }
    if(!s.empty()){
        y=*s.begin();
    }
    if(a[n-1]==x||a[n-2]==x){
        if(a[n-2]!=1&&a[n-1]!=1){
            x=1;
        }
        else if(a[n-2]!=2&&a[n-1]!=2){
            x=2;
        }
        else{
            x=3;
        }
    }
    if(a[n-1]==y||x==y){
        if(x!=1&&a[n-1]!=1){
            y=1;
        }
        else if(x!=2&&a[n-1]!=2){
            y=2;
        }
        else{
            y=3;
        }
    }
    cout<<x<<" ";
    if(k!=1){
        cout<<y<<" ";
    }
    for (int i = 3; i <= k; i++)
    {
        if(i==x){
            if(y==1){
                cout<<2<<" ";
            }
            else{
                cout<<1<<" ";
            }
        }
        else if(i==y){
            if(x==2){
                cout<<1<<" ";
            }
            else{
                cout<<2<<" ";
            }
        }
        else{
            cout<<i<<" ";
        }
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
