#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    int n;
	cin >> n;
	ll a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bool ans=true;
    ll cnt=0,curr=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]!=0){
            if(cnt==2){
                ans=false;
                break;
            }
            else if(curr==0){
                curr=a[i];
                cnt++;
            }
            else{
                if(a[i]!=-curr){
                    ans=false;
                    break;
                }
                else{
                    cnt++;
                }
            }
        }
    }
    if(n==4){
        ll b=a[0]+a[1]+a[2],c=a[0]+a[1]+a[3],d=a[0]+a[2]+a[3],e=a[1]+a[2]+a[3];
        if((b==a[0]||b==a[1]||b==a[2]||b==a[3])&&(c==a[0]||c==a[1]||c==a[2]||c==a[3])&&(d==a[0]||d==a[1]||d==a[2]||d==a[3])&&(e==a[0]||e==a[1]||e==a[2]||e==a[3])){
            ans=true;
        }
    }
    if(n==3){
        ll x=a[0]+a[1]+a[2];
        if(x==a[0]||x==a[1]||x==a[2]){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    else{
        ans?cout<<"YES\n":cout<<"NO\n";
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