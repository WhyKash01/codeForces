#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    ll q;cin>>q;
    pair<ll,ll> qu[q];
    for(int i=0;i<q;i++){
        cin>>qu[i].first>>qu[i].second;
    }
    pair<ll,ll> dis[n];
    for (int i = 0; i < n; i++)
    {
        if(i==0){
            dis[i].second=1;
            dis[i].first=-1;
        }
        else if(i==n-1){
            dis[i].first=1;
            dis[i].second=-1;
        }
        else{
            ll l=a[i]-a[i-1],r=a[i+1]-a[i];
            if(r>l){
                dis[i].first=1;
                dis[i].second=r;
            }
            else{
                dis[i].second=1;
                dis[i].first=l;
            }
        }
    }
    ll sum=0,sum1=0;
    for (int i = 0; i < n; i++)
    {
        sum+=dis[i].second;
        dis[i].second=sum;
        sum1+=dis[n-i-1].first;
        dis[n-i-1].first=sum1;
    }
    for (int i = 0; i < q; i++)
    {
        if(qu[i].first==qu[i].second){
            cout<<0<<endl;
        }
        else if(qu[i].first>qu[i].second){
            if(qu[i].first==n){
                cout<<dis[qu[i].second].first<<endl;
            }
            else{
                cout<<dis[qu[i].second].first-dis[qu[i].first].first<<endl;
            }
        }
        else{
            if(qu[i].first==1){
                cout<<dis[qu[i].second-2].second<<endl;
            }
            else{
                cout<<dis[qu[i].second-2].second-dis[qu[i].first-2].second<<endl;
            }
        }
    }
    
    cout<<endl;
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