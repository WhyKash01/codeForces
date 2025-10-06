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
    int n,s1,s2;
    cin>>n>>s1>>s2;
    pair<int,int> a[n];
    
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a[i]={x,i+1};
    }
    
    sort(a,a+n);
    vector<int>v1,v2;
    int x=s1,y=s2;
    for(int i=n-1;i>=0;i--){
        if(x<=y){
            v1.push_back(a[i].second);
            x+=s1;
        }
        else{
            v2.push_back(a[i].second);
            y+=s2;
        }
    }
    cout<<v1.size()<<" ";
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
    cout<<v2.size()<<" ";
    for(auto x:v2){
        cout<<x<<" ";
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