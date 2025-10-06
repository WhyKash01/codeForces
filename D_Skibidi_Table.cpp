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
    int n,q;
    cin>>n>>q;
    vector<pair<string,vector<int>>>qu;
    for (int i = 0; i < q; i++)
    {
        string s;
        cin>>s;
        if(s=="->"){
            int x,y;
            cin>>x>>y;
            qu.push_back({s,{x,y}});
        }
        else{
            int x;
            cin>>x;
            qu.push_back({s,{x}});
        }
    }
    
    for (int i = 0; i < q; i++)
    {
        if(qu[i].first=="->"){
            int x=qu[i].second[0],y=qu[i].second[1];
            vector<pair<int,int>>v;
            int z=n;
            int ans=1;
            while(z>0){
                int k=powl(2,z-1);
                if(x<=k&&y<=k){
                    z--;
                }
                else if(x>k&&y>k){
                    x-=k,y-=k;
                    ans+=k*k;
                    z--;
                }
                else if(x>k&&y<=k){
                    x-=k;
                    ans+=(k*k)*2;
                    z--;
                }
                else{
                    z--;
                    y-=k;
                    ans+=(k*k)*3;
                }
            }
            cout<<ans<<endl;
        }
        else{
            int k=qu[i].second[0];
            int x=1,y=1;
            int z=n;
            while(z>0){
                int e=powl(2,z*2-2);
                int f=(k-1)/e;
                k-=f*e;
                int w=powl(2,z-1);
                
                if(f==3){
                    y+=w;
                }
                else if(f==2){
                    x+=w;
                }
                else if(f==1){
                    x+=w,y+=w;
                }
                z--;
            }
            cout<<x<<" "<<y<<endl;
        }
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
