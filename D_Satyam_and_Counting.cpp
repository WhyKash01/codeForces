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


void solve()
{
    int n;
    cin>>n;
    vpii a;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        a.pb({x,y});
    }
    sort(all(a));
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        if(a[i].first==a[i+1].first){
            ans+=n-2;
        }
        if(a[i].second==0){
            bool f=false,l=false;
            int j=i+1;
            while(j<n){
                if(a[j].first>a[i].first+2){
                    break;
                }
                if(a[j].first==a[i].first+1&&a[j].second==1){
                    f=true;
                }
                if(a[j].first==a[i].first+2&&a[j].second==0){
                    l=true;
                }
                j++;
            }
            if(l&&f){
                ans++;
            }
        }
        else{
            bool f=false,l=false;
            int j=i+1;
            while(j<n){
                if(a[j].first>a[i].first+2){
                    break;
                }
                if(a[j].first==a[i].first+1&&a[j].second==0){
                    f=true;
                }
                if(a[j].first==a[i].first+2&&a[j].second==1){
                    l=true;
                }
                j++;
            }
            if(l&&f){
                ans++;
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
    cin>>t;
    while(t--)
    {
        solve();
    }
}
