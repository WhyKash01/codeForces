#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    vector<ll> o;
    ll last=0;
    for (int i = 0; i < n; i++)
    {
        if(s[0][i]=='0'){
            last=i;
        }
        if(s[1][i]=='0'){
            o.push_back(i);
        }
    }
    if(o.size()==0){
        for(int i=0;i<=last;i++){
            cout<<s[0][i];
        }
        for (int i = last; i < n; i++)
        {
            cout<<s[1][i];
        }
        cout<<endl;
        cout<<n-last<<endl;
    }
    else{
        ll ans=1,curr=1,last=0;
        bool f=true;
        for (int i = 0; i < n-1; i++)
        {
            if(s[0][i+1]==s[1][i]){
                curr++;
                if(curr>ans){
                    last=i+1;
                }
                ans=max(ans,curr);
            }
            else{
                if(s[0][i+1]=='0'&&f){
                    last=i+1;
                    ans=1;
                }else{
                    break;
                }
                curr=1;
            }
        }
        for(int i=0;i<=last;i++){
            cout<<s[0][i];
        }
        for (int i = last; i < n; i++)
        {
            cout<<s[1][i];
        }
        cout<<endl;
        cout<<ans<<endl;
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