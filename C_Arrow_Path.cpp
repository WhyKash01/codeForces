#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    string s[2];
    cin>>s[0]>>s[1];
    bool f=true;
    for (int i = 0; i < n-1; i++)
    {
        if(i%2==0){
            if(s[1][i]=='<'&&s[0][i+1]=='<'){
                f=false;
                break;
            }
        }
        else{
            if(s[0][i]=='<'&&s[1][i+1]=='<'){
                f=false;
                break;
            }
        }
    }
    (f)?cout<<"YES\n":cout<<"NO\n";
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