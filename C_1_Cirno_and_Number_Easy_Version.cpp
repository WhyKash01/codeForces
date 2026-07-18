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
int MOD = 1e9 + 7;

void solve()
{
    string a;
    int n;
    cin>>a>>n;
    int x,y;
    cin>>x>>y;
    if(x>y){
        swap(x,y);
    }
    int l=a.size();
    int num=0LL;
    int p=0LL,q=0LL;
    bool f=false;
    int w,u=1LL;
    for (int i = 0; i < l; i++)
    {
        int curr=a[i]-'0';
        if(f){
            u*=10;
            num=num*10+curr;
            p=p*10+x;
            q=q*10+y;
        }
        if(curr!=x&&curr!=y){
            f=true;
            w=curr;
            
        }
    }
    if(f){
        int ans=LLONG_MAX;
        // cout<<p<<" "<<abs(num-(y*u+q))<<endl;
        ans=min(ans,abs(num-(x*u+p)));
        ans=min(ans,abs(num-(y*u+p)));
        ans=min(ans,abs(num-(x*u+q)));
        ans=min(ans,abs(num-(y*u+q)));
        ans=min(ans,abs(num-q));
        cout<<ans<<endl;
    }
    else{
        cout<<0<<endl;
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