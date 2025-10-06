#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve()
{
    ll n;cin>>n;
    string s;
    cin>>s;
    ll e=0,o=0,x=-1,y=n;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='s'){
            x=i;
            e++;
        }
        else if(s[i]=='p'){
            if(y==n){
                y=i;
            }
            o++;
        }
    }
    if(x>y||(e>1&&o>1)){
        cout<<"NO"<<endl;
    }
    else{
        if(e==0||o==0){
            cout<<"YES"<<endl;
        }
        else if(e==1&&o==1){
            if(s[0]=='s'||s[n-1]=='p'){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(e==1){
                if(s[0]=='s'){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(s[n-1]=='p'){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
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