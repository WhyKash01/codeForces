#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll o=0,e=0;
    char last='2';
    ll ans=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==last){
            ans++;
            if(s[i]=='0'){
                o++;
            }
            else{
                e++;
            }
        }
        else if(s[i]=='0'){
            if(o>0){
                ans+=i+1;
            }
            else{
                ans+=e+1;
            }
            o++;
        }
        else if(s[i]=='1'){
            if(e>0){
                ans+=i+1;
            }
            else{
                ans+=o+1;
            }
            e++;
        }
        last=s[i];
    }
    cout<<ans<<endl;
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