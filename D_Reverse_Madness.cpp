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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int a[k], b[k];
    for (int i = 0; i < k; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    int q;
    cin>>q;
    int c[q];
    for (int i = 0; i < q; i++)
    {
        cin>>c[i];
    }
    vector<bool>v(n+1,false);
    set<int>s1;
    for (int i = 0; i < q; i++)
    {
        int x=lower_bound(b,b+k,c[i])-b;
        int p1=min(c[i],a[x]+b[x]-c[i]);
        int p2=max(c[i],a[x]+b[x]-c[i]);
        int p3=(p1+p2-1)/2;
        if(s1.find(p1)!=s1.end()){
            s1.erase(p1);
        }
        else{
            s1.insert(p1);
        }
    }
    int y=0;
    bool f=false;
    for (int i = 1; i <= n; i++)
    {
        int mid=(a[y]+b[y])/2;
        // cout<<mid<<" ";
        if(*s1.begin()==i){
            s1.erase(s1.begin());
            f=!f;
        }
        if(f){
            if(i<=mid){
                v[i]=!v[i];
            }
        }
        if(i==b[y]){
            f=false;
            y++;
        }
    }
    
    y=0;
    for (int i = 1; i <= n; i++)
    {
        
        if(v[i]){
            // cout<<i<<" ";
            int j=b[y]-(i-a[y]);
            swap(s[i-1],s[j-1]);
        }
        if(i==b[y]){
            y++;
        }
    }
    cout<<s<<endl;
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