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
int M = 1000000001;
map<int,int>m;
vector<int>v;
void solve()
{
    int n;
    cin>>n;
    int y;
    cin>>y;
    int ans=0;
    int cnt=0;
    set<int>v1;
    map<int,int>m1;
    while (n>0)
    {
        int x=upper_bound(v.begin(),v.end(),n)-v.begin()-1;
        ans+=m[v[x]];
        v1.insert(v[x]);
        m1[v[x]]++;
        cnt++;
        n-=v[x];
    }
    if(cnt>y){
        cout<<-1<<endl;
    }
    else{
        int res=y-cnt;
        while (res>1)
        {
            if(*v1.rbegin()>1){
                
                if(m1[*v1.rbegin()]>=res/2){
                    ans-=(res/2)*(*v1.rbegin())/3;
                    break;
                }
                else{
                    int x=m1[*v1.rbegin()];
                    m1[*v1.rbegin()/3]+=x*3;
                    v1.insert(*v1.rbegin()/3);
                    ans-=x**v1.rbegin()/3;
                    v1.erase(*v1.rbegin());
                    res-=x*2;
                }
                
            }
            else{
                break;
            }
        }
        cout<<ans<<endl;
        
    }
    
    
}

signed main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t = 1;
    
    int x=0;
    for (int i = 1; i < M; i*=3)
    {
        m[i]=powl(3,1+x)+x*powl(3,x-1);
        x++;
        v.push_back(i);
    }
    cin>>t;
    while (t--)
    {
        solve();
    }
}
