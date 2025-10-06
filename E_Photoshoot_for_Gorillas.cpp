#include <bits/stdc++.h>
using namespace std;
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
#define int long long
#define pii pair<int,int>
#define fr first
#define sc second
#define vi vector<int>
#define vvi vector<vector<int>>
#define vpii vector<pair<int,int>>
#define pb push_back
#define ppb pop_back
#define inp(v) for(auto& x : v) cin >> x;
#define rep(i,a,b) for(int i = a; i < b; i++)
#define all(v) (v).begin(),(v).end()
int M=1e9+7;

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    int s;cin>>s;
    int a[s];
    for (int i = 0; i < s; i++)
    {
        cin>>a[i];
    }
    int dx=min(k-1,n-k);
    int dy=min(k-1,m-k);
    int b[n],c[m];
    int cur=1;
    for (int i = 0; i < n; i++)
    {
        if(i<dx){
            b[i]=cur;
            cur++;
        }
        else if(i<n-dx){
            b[i]=cur;
        }
        else{
            cur--;
            b[i]=cur;
        }
    }
    cur=1;
    for (int i = 0; i < m; i++)
    {
        if(i<dy){
            c[i]=cur;
            cur++;
        }
        else if(i<m-dy){
            c[i]=cur;
        }
        else{
            cur--;
            c[i]=cur;
        }
    }
    vector<int>v;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v.push_back(b[i]*c[j]);
        }
    }
    sort(all(v));
    sort(a,a+s);
    int l=v.size();
    l--;
    int ans=0;
    for (int i = s-1; i >=0 ; i--)
    {
        ans+=a[i]*v[l];
        l--;
    }
    cout<<ans<<endl;
    return;
}


signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    cin>>t;
    while(t--)
    {
        solve();
    }
}


