#include <bits/stdc++.h>
#define ll long long
#define LCM(a, b) (a) * ((b) / std::__gcd(a, b));
using namespace std;
ll inf = 1000000000;
void solve()
{
    ll n;
    cin>>n;
    ll l=n-2;
    ll b[l];
    ll a[n]={0};
    for (int i = 0; i < l; i++)
    {
        cin>>b[i];
    }
    ll last=-5,cnt=0;
    bool ans=true;
    for (int i = 0; i < l-1; i++)
    {
        if(b[i]==1){
            last=i;
            cnt=0;
        }
        else{
            cnt++;
            if(last!=-5&&cnt==1&&b[i+1]==1){
                ans=false;
                break;
            }
        }
    }
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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