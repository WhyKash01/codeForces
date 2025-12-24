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
    int n;cin>>n;
    int a[n];
    set<pair<int,int>>s;
    map<int,pair<int,int>>m;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        s.insert({a[i],i});
        if(i==0){
            m[i]={n-1,1};
        }
        else if(i==n-1){
            m[i]={i-1,0};
        }
        else{
            m[i]={i-1,i+1};
        }
    }
    int ans=0;
    while(n>1){
        int x=s.begin()->second;
        int i=m[x].first,j=m[x].second;
        if(m[x].first==m[x].second){
            ans+=a[m[x].first];
        }
        else{
            m[i].second=j;
            m[j].first=i;
            ans+=min(a[j],a[i]);
        }
        s.erase(s.begin());
        n--;
    }
    cout<<ans<<endl;
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
