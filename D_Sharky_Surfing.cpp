#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,m,L;
    cin>>n>>m>>L;
    vector<pair<ll,ll>>v;
    for (int i = 0; i < n; i++)
    {
        pair<ll,ll>p;
        cin>>p.first>>p.second;
        v.push_back(p);
    }
    vector<pair<ll,ll>>p;
    for (int i = 0; i < m; i++)
    {
        ll x,y;
        cin>>x>>y;
        p.push_back({x,y});
        
    }
    ll ans=0,curr=0,j=1;
    bool f=true;
    
    ll it=0;
    priority_queue<ll>q;
    for (int i = 0; i < v.size(); i++)
    {
        if(!f){
            break;
        }
        while(it<p.size()){
            if(p[it].first<v[i].first){
            q.push(p[it].second);
            it++;
            }
            else{
                break;
            }
        }
        ll len=v[i].second-v[i].first+2;
        while(j<len){
            if(q.size()==0){
                f=false;
                break;
            }
            j+=q.top();
            ans++;
            q.pop();
        }
    }
    f?cout<<ans<<endl:cout<<-1<<endl;
    return;
}

int32_t main()
{
    cin.tie(0)->sync_with_stdio(0);
    int tc = 1;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}