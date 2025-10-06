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
int M = 998244353;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    vector<pii>v;
    for (int i = 0; i < n; i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    pii p={0,0};
    if(a[0]==1){
        p.first++;
        p.second++;
    }
    else if(a[0]==-1){
        p.second++;
    }
    bool f=true;
    for (int i = 0; i < n; i++)
    {
        
        if(v[i].first>p.second||v[i].second<p.first){
            
            f=false;
            break;
        }
        v[i].first=max(v[i].first,p.first);
        v[i].second=min(v[i].second,p.second);
        if(a[i+1]==1){
            p.first=v[i].first+1;
            p.second=v[i].second+1;
        }
        else if(a[i+1]==0){
            p.first=v[i].first;
            p.second=v[i].second;
        }
        else{
            p.second=v[i].second+1;
            p.first=v[i].first;
        }
    }
    if(f){
        int x=v[n-1].first;
        for (int i = n-2; i >=0; i--)
        {
            
            if(a[i+1]==1){
                x--;
            }
            else if(a[i+1]==-1){
                if(v[i].first<x){
                    a[i+1]=1;
                    x--;
                }
                else{
                    a[i+1]=0;
                }
            }
        }
        if(a[0]==-1){
            if(x==0){
                a[0]=0;
            }
            else{
                a[0]=1;
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        
    }
    else{
        cout<<-1<<endl;
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
