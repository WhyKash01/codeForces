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
int M = 1e9 + 7;

void solve()
{
    int n,m;
    cin>>n>>m;
    int a[n+m+1],b[n+m+1];
    int l=n+m+1;
    for (int i = 0; i < l; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < l; i++)
    {
        cin>>b[i];
    }
    vector<int>v1,v2;
    int pref[l+1];
    pref[0]=0;
    int x=n,y=m;
    bool f=true;
    int k=0;
    int c[l];
    for (int i = 0; i < l; i++)
    {
        if(a[i]>b[i]){
            if(x>0){
                pref[i+1]=pref[i]+a[i];
                c[i]=a[i];
                x--;    
            }
            else{
                if(f){
                    f=false;
                    k=i+1;
                }
                c[i]=b[i];
                pref[i+1]=pref[i]+b[i];
            }
            v1.push_back(i);
        }
        else{
            if(y>0){
                pref[i+1]=pref[i]+b[i];
                y--;
                c[i]=b[i];
            }
            else{
                if(f){
                    f=false;
                    k=i+1;
                }
                c[i]=a[i];
                pref[i+1]=pref[i]+a[i];
            }
            v2.push_back(i);
        }
    }
    v1.push_back(1e6);
    v2.push_back(1e6);
    for (int i = 0; i < l; i++)
    {
        if(i+1>=k){
            cout<<pref[l]-c[i]<<" ";
        }
        else{
            if(c[i]==b[i]){
                int x=*(lower_bound(v2.begin(),v2.end(),k-1));
                if(x==1e6){
                    x=l-1;
                }
                cout<<pref[l]-c[i]-c[x]+b[x]<<" ";
            }
            else{
                int x=*(lower_bound(v1.begin(),v1.end(),k-1));
                if(x==1e6){
                    x=l-1;
                }
                cout<<pref[l]-c[i]-c[x]+a[x]<<" ";
            }
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
