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
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int x=0,y=0;
    int pref[n+1];
    pref[0]=0;
    for (int i = 0; i < n; i++)
    {
        pref[i+1]=pref[i]^a[i];
        if(s[i]=='0'){
            x^=a[i];
        }
        else{
            y^=a[i];
        }
    }
    int q;cin>>q;
    for (int i = 0; i < q; i++)
    {
        int z;
        cin>>z;
        if(z==2){
            int f;cin>>f;
            if(f==1){
                cout<<y<<" ";
            }
            else{
                cout<<x<<" ";
            }
        }
        else{
            int l,r;cin>>l>>r;
            x^=pref[r]^pref[l-1];
            y^=pref[r]^pref[l-1];
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