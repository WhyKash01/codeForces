#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n,k,pb,ps;cin>>n>>k>>pb>>ps;
    ll a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>b[i];
    }
    ll bo=0,s=0;
    ll Max=-1;
    ll Maxb=0,Maxs=0;
    ll x=pb,y=ps;
    bool f=true,g=true;
    while(true){
        if(x==pb&&!f){
            break;
        }
        f=false;
        Maxb=max(Maxb,b[x-1]);
        x=a[x-1];
    }
    while(true){
        if(y==ps&&!g){
            break;
        }
        g=false;
        Maxs=max(Maxs,b[y-1]);
        y=a[y-1];
    }
    ll cnt=0,curr=0;

    while(true){
        if(cnt==k){
            bo=max(bo,curr);
            break;
        }
        if(b[pb-1]==Maxb){
            bo=max(bo,curr+(k-cnt)*b[pb-1]);
            break;
        }
        else{
            bo=max(bo,curr+(k-cnt)*b[pb-1]);
            curr+=b[pb-1];
            cnt++;
            pb=a[pb-1];
        }
    }
    cnt=0,curr=0;
    while(true){
        if(cnt==k){
            s=max(s,curr);
            break;
        }
        if(b[ps-1]==Maxs){
            s=max(s,curr+(k-cnt)*b[ps-1]);
            break;
        }
        else{
            s=max(s,curr+(k-cnt)*b[ps-1]);
            curr+=b[ps-1];
            cnt++;
            ps=a[ps-1];
        }
    }
    if(bo==s){
        cout<<"Draw"<<endl;
    }
    else if(bo>s){
        cout<<"Bodya"<<endl;
    }
    else{
        cout<<"Sasha"<<endl;
    }
    
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