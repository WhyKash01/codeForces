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
int MOD = 676767677;

void solve()
{
    int n;
    cin>>n;
    int a[n];
    string s;
    int l=-1,r=-1;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        if(a[i]==1){
            l=i;
        }
        if(a[i]==n){
            r=i;
        }
    }
    cin>>s;
    bool f=true;
    if(s[0]=='1'||s[n-1]=='1'){
        f=false;
    }
    if(s[l]=='1'||s[r]=='1'){
        f=false;
    }
    if(!f){
        cout<<-1<<endl;
    }
    else{
        if(l>r){
            swap(l,r);
        }
        cout<<5<<endl;
        cout<<1<<" "<<l+1<<endl;
        cout<<1<<" "<<r+1<<endl;
        cout<<l+1<<" "<<n<<endl;
        cout<<r+1<<" "<<n<<endl;
        cout<<l+1<<" "<<r+1<<endl;
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