#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    a[0]=0;
    for (int i = 1; i < n; i++)
    {
        cin>>a[i];
    }
    ll Max=0;
    set<ll>s;
    vector<ll>v;
    for (int i = 0; i < n; i++)
    {
        s.insert(i+1);
    }
    for (int i = 1; i < n; i++)
    {
        if(s.find(a[i]-a[i-1])!=s.end()){
            s.erase(a[i]-a[i-1]);
        }
        else{
            v.push_back(a[i]-a[i-1]);
        }
    }
    if(v.size()>1||s.size()>2){
        cout<<"NO"<<endl;
    }
    else{
        if(v.size()==1){
            ll x=0;
            for(auto i:s){
                x+=i;
            }
            if(x==v[0]){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"YES"<<endl;
        }
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