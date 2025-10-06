#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    string s;
    cin>>s;
    ll i=0,cnt=0;
    while(i<n-1){
        if(s[i]=='('){
            cnt++;
            i+=2;
        }
        else{
            bool f=false;
            for (int j = i+1; j < n; j++)
            {
                if(s[j]==')'){
                    i=j+1;
                    f=true;
                    cnt++;
                    break;
                }
            }
            if(!f){
                break;
            }
            
        }
    }
    
    cout<<cnt<<" "<<n-i<<endl;
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